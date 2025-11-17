#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;

    int N;
    in N;
    int cnt[5] = {0};
    Fori(N) {
        int x;
        in x;
        cnt[x]++;
    }

    int ans = 0;
    ans += cnt[4];

    ans += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);

    ans += cnt[2] / 2;
    cnt[2] %= 2;

    if (cnt[2]) {
        ans++;
        cnt[1] = max(0, cnt[1] - 2);
    }

    if (cnt[1] > 0) ans += (cnt[1] + 3) / 4;

    out ans endl;

    return 0;
}
