#include<iostream>
using namespace std;
int main() {
    int a, b;
    int result = 1;
    int flag = 0;
    cin >> a >> b;
    while (true) {
        for (int i = 2; i < 100000; i++) {
            if (a % i == 0 && b % i == 0) {
                a /= i;
                b /= i;
                result *= i;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
        flag = 0;
    }
    cout << result << endl;
    cout << result * a * b;
}