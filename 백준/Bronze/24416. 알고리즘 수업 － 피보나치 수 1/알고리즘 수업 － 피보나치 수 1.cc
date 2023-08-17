#include <iostream>

using namespace std;

int count1 = 0;
int count2 = 0;

int fib(int n) {
    if (n == 1 or n == 2) {
        count1++;
        return 1;
    }
    else 
        return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    int f[45];
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i < n; i++) {
        count2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main() {
    int N; cin >> N;
    fib(N); fibonacci(N);
    cout << count1 << " " << count2 + 1;
}