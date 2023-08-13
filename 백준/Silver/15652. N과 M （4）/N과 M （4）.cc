#include <iostream>
#include <array>

using namespace std;

int N, M;

void PrintArr(const array<int, 8>& Arr) {
    for (int i = 0; i < M; i++)
        cout << Arr.at(i) << " ";
    cout << "\n";
}

bool Comp(array<int, 8> Arr, int index) {
    for (int i = 0; i < index; i++) {
        if (Arr.at(i) > Arr.at(index))
            return false;
    }

    return true;
}

void Func(array<int, 8>& Arr, int index) {
    if (index == M) {
        PrintArr(Arr);
        return;
    }

    for (int i = 0; i < N; i++) {
        Arr.at(index) = i + 1;
        if (Comp(Arr, index)) 
            Func(Arr, index + 1);
    }
}

int main() {
    cin >> N >> M;
    array<int, 8> Arr{};

    Func(Arr, 0);

    return 0;
}