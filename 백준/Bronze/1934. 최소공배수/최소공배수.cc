#include<iostream>

using namespace std;

int main() {
    int TestCase; cin >> TestCase;
    while (TestCase--) {
        int a, b;
        int result = 1;
        bool flag = false;
        cin >> a >> b;
        while (true) {
            for (int i = 2; i < 100000; i++) {
                if (a % i == 0 && b % i == 0) {
                    a /= i;
                    b /= i;
                    result *= i;
                    flag = true;
                }
            }
            if (!flag) {
                break;
            }
            flag = false;
        }
        cout << result * a * b << "\n";
    }
}