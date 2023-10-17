#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int list[501];
    for (int i = 1; i <= 500; i++) list[i] = i * i;

    int n; cin >> n;
    int ret(0);
    for (int i = 1; i <= 500; i++) for (int j = i; j <= 500; j++)
        if (list[j] - list[i] == n) ret++;
    cout << ret;
}