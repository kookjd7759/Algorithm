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

    int N, K; in N >> K;
    vector<vector<int>> a(N, vector<int>(K));
    Fori(N) Forj(K) in a[i][j];

    vector<int> ok(N);
    Forj(K) {
        int mx = 0, idx = -1, cnt = 0;
        Fori(N) {
            if (a[i][j] > mx) mx = a[i][j], idx = i, cnt = 1;
            else if (a[i][j] == mx) ++cnt;
        }
        if (cnt == 1) ok[idx] = 1;
    }

    int ans = 0;
    Fori(N) ans += ok[i];
    out ans endl;

    return 0;
}