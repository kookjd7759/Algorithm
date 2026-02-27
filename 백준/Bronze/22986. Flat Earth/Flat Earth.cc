#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define ll long long
#define out cout <<
#define in cin >>
#define endl "\n"
#define Fori(x) for(int i=0;i<(x);++i)

using namespace std;

int main() {
    Sync;
    int T; in T;
    while (T--) {
        ll N, K; in N >> K;
        ll L = max(1LL, N - K);
        __int128 a = (__int128)N * (N + 1), b = (__int128)(L - 1) * L;
        __int128 res = 2 * (a - b);
        out (long long)res << endl;
    }
    return 0;
}