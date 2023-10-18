#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;  cin >> t;
    for (int i = 0; i <= t; i++) {
        if (i == 0) cout << "int a;";
        else if (i == 1) cout << "int *ptr = &a;";
        else if (i == 2) cout << "int **ptr2 = &ptr;";
        else {
            cout << "int ";
            for (int j = 0; j < i; j++) cout << "*";
            cout << "ptr" << i << " = &ptr" << i - 1 << ";";
        }
        cout << "\n";
    }
}