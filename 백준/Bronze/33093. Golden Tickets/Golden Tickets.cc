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
    vector<string> S(N + 1), T(N + 1);
    For1i(N) in S[i] >> T[i];

    set<string> banned, used;
    For1i(M) banned.insert(T[i]);

    vector<string> ans;
    for (int i = M + 1; i <= N && (int)ans.size() < K; ++i) {
        if (banned.count(T[i]) || used.count(T[i])) continue;
        used.insert(T[i]);
        ans.push_back(S[i]);
    }

    out ans.size() endl;
    for (auto &s : ans) out s endl;

    return 0;
}