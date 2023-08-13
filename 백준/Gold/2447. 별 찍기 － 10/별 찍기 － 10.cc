#include <iostream>

using namespace std;

void Func(int i, int j, int num) {
    if ((i / num) % 3 == 1 && (j / num) % 3 == 1) 
        cout << ' ';
    else {
        if (num / 3 == 0)
            cout << '*';
        else
            Func(i, j, num / 3);
    }
}
int main() {
    int num; cin >> num;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++)
            Func(i, j, num);
        cout << '\n';
    }
}