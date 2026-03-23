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

    int N, M, K; in N >> M >> K;
    string S; in S;
    vector<int> diff(N + 3);
    Fori(N) if (S[i] == 'R') {
        int l = max(1, i + 1 - K), r = min(N, i + 1 + K);
        ++diff[l], --diff[r + 1];
    }

    int cur = 0, cnt = 0;
    For1i(N) {
        cur += diff[i];
        if (cur > 0) ++cnt;
    }

    if (cnt <= M) out "Yes" endl;
    else out "No" endl;

    return 0;
}