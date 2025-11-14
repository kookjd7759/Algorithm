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

    int N, M;
    in N >> M;
    string A, B;
    in A >> B;

    int strokes[26] = {3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1};

    vector<int> v;
    int L = max(N, M);
    Fori(L) {
        if (i < N) v.push_back(strokes[A[i] - 'A']);
        if (i < M) v.push_back(strokes[B[i] - 'A']);
    }

    while (v.size() > 2) {
        vector<int> nxt(v.size() - 1);
        Fori((int)nxt.size()) {
            nxt[i] = (v[i] + v[i + 1]) % 10;
        }
        v.swap(nxt);
    }

    int ans = v[0] * 10 + v[1];
    out ans << "%\n";

    return 0;
}
