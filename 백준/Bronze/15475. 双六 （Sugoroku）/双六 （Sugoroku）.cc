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

    int N; in N;
    vector<int> A(N + 2);
    For1i(N) in A[i];

    For1j(N + 1) {
        vector<int> dp(N + 2);
        dp[0] = 1;
        for (int i = 0; i <= N; ++i) if (dp[i]) {
            for (int d = 1; d <= j; ++d) {
                int ni = i + d;
                if (ni >= N + 1) { out j endl; return 0; }
                if (A[ni] == 0) dp[ni] = 1;
            }
        }
    }

    return 0;
}