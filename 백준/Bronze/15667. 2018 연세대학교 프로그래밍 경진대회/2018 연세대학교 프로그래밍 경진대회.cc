#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n; n--;
    for (int i = 1; i * i <= n; i++)
        if (i * (i + 1) == n) {
            cout << i;
            break;
        }
}