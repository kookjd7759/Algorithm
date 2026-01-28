#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    while (true) {
        int n;
        cin >> n;
        if (n == -1) break;

        int sum = 1;
        int divs[100000];
        int dcnt = 0;
        divs[dcnt++] = 1;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                divs[dcnt++] = i;
                if (i * i != n) {
                    sum += n / i;
                    divs[dcnt++] = n / i;
                }
            }
        }

        if (sum == n) {
            for (int i = 0; i < dcnt - 1; i++) {
                for (int j = i + 1; j < dcnt; j++) {
                    if (divs[i] > divs[j]) {
                        int t = divs[i];
                        divs[i] = divs[j];
                        divs[j] = t;
                    }
                }
            }
            cout << n << " = ";
            for (int i = 0; i < dcnt; i++) {
                if (i) cout << " + ";
                cout << divs[i];
            }
            cout << "\n";
        } else {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}
