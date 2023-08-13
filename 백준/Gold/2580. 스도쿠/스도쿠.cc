#include <iostream>

using namespace std;

int Arr[9][9];

// [][index]
bool row[9][10] {}; // 행 [y][Num]
bool col[9][10] {}; // 열 [x][Num]
bool square[9][10] {}; // Square [index][Num]

int ToSquare(int Y, int X) { 
    return (Y / 3) * 3 + (X / 3);
}

void Input() {
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++) {
            cin >> Arr[i][j];

            if (Arr[i][j]) {
                col[j][Arr[i][j]] = true;
                row[i][Arr[i][j]] = true;
                square[ToSquare(i, j)][Arr[i][j]] = true;
            }
        }      
}

void Output() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) 
            cout << Arr[i][j] << " ";
        cout << "\n";
    }
}

void Print_() {
    cout << "=== row === \n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10; j++) {
            cout << row[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "=== col === \n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10; j++) {
            cout << col[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "=== row === \n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10; j++) {
            cout << square[i][j] << " ";
        }
        cout << "\n";
    }
}

bool Comp(int X, int Y, int num) {
    if (col[X][num] || row[Y][num] || square[ToSquare(Y, X)][num])
        return false;

    return true;
}

void Func(int index) {
    if (index == 81) {
        Output();
        exit(0);
    }

    int X = index % 9;
    int Y = index / 9;

    if (Arr[Y][X])
        Func(index + 1);
    else {
        for (int i = 1; i < 10; i++) {
            if (Comp(X, Y, i)) {
                col[X][i] = true;
                row[Y][i] = true;
                square[ToSquare(Y, X)][i] = true;
                Arr[Y][X] = i;
                Func(index + 1);

                col[X][i] = false;
                row[Y][i] = false;
                square[ToSquare(Y, X)][i] = false;
                Arr[Y][X] = 0;
            }
        }
    }
}

int main() {
    Input();
    Func(0);

    return 0;
}