#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long MW, MB, TW, TB, PW, PB;
    cin >> MW >> MB;
    cin >> TW >> TB;
    cin >> PW >> PB;

    long long a = min({TW, MB, PB});
    long long b = min({TB, MW, PW});

    long long ans;
    if (a == b) ans = 2 * a;
    else if (a > b) ans = 2 * b + 1;
    else ans = 2 * a + 1;

    cout << ans << "\n";
    return 0;
}