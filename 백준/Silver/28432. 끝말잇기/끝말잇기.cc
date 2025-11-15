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
    vector<string> S(N);
    int qpos = -1;
    Fori(N) {
        in S[i];
        if (S[i] == "?") qpos = i;
    }

    int M;
    in M;
    vector<string> A(M);
    Fori(M) in A[i];

    set<string> used;
    Fori(N) if (S[i] != "?") used.insert(S[i]);

    for (int i = 0; i < M; ++i) {
        string cand = A[i];
        if (used.count(cand)) continue;

        vector<string> T = S;
        T[qpos] = cand;

        bool ok = true;

        set<string> checkSet;
        Fori(N) {
            if (checkSet.count(T[i])) {
                ok = false;
                break;
            }
            checkSet.insert(T[i]);
        }
        if (!ok) continue;

        for (int j = 0; j < N - 1 && ok; ++j) {
            if (T[j].back() != T[j + 1].front()) ok = false;
        }

        if (ok) {
            out cand << "\n";
            return 0;
        }
    }

    return 0;
}
