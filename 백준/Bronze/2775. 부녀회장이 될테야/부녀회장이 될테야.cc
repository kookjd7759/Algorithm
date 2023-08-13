#include <iostream>

using namespace std;

int main() {
    int TestCase, k, n;
    cin >> TestCase;

    int Array_D[14] = {0, };

    while (TestCase--) {
        cin >> k >> n;
        for (int j = 0; j < n; j++)
            Array_D[j] = j + 1;
        for (int i = 0; i < k; i++) {
            for (int j = 1; j < n; j++)
                Array_D[j] += Array_D[j - 1];
        }

        if (n < 1)
            cout << 0;
        else
            cout << Array_D[n - 1];

        cout << endl;
    }

    
}