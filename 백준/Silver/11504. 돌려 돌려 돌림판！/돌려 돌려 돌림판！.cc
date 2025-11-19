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

int cmpVec(const vector<int>& a, const vector<int>& b) {
    int m = (int)a.size();
    Fori(m) {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
    }
    return 0;
}

int main() {
    Sync;

    int T;
    in T;
    while (T--) {
        int N, M;
        in N >> M;

        vector<int> X(M), Y(M), wheel(N);
        Fori(M) in X[i];
        Fori(M) in Y[i];
        Fori(N) in wheel[i];

        int ans = 0;
        Fori(N) {
            vector<int> Z(M);
            Forj(M) {
                Z[j] = wheel[(i + j) % N];
            }
            if (cmpVec(Z, X) >= 0 && cmpVec(Z, Y) <= 0) ++ans;
        }

        out ans << "\n";
    }

    return 0;
}
