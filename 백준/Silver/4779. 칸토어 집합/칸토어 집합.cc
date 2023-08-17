#include <iostream>
#include <cmath>

using namespace std;

void rec(int a) {
    int spaceSize = pow(3, a - 1);
    if (a == 0) {
        cout << "-";
        return;
    }

    rec(a - 1);
    for (int i = 0; i < spaceSize; i++)
        cout << " ";
    rec(a - 1);
}

int main() {
    int N;
    while (cin >> N) {
        rec(N);
        cout << "\n";
    }
}