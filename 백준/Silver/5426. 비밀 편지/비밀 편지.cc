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

    int T;
    in T;
    while (T--) {
        string enc;
        in enc;
        int L = (int)enc.size();
        int n = (int)round(sqrt(L));

        vector<string> B(n, string(n, ' '));
        int idx = 0;
        Fori(n) Forj(n) B[i][j] = enc[idx++];

        vector<string> A(n, string(n, ' '));
        Fori(n) Forj(n) A[i][j] = B[j][n - 1 - i];

        string orig;
        orig.reserve(L);
        Fori(n) Forj(n) orig.push_back(A[i][j]);

        out orig << "\n";
    }

    return 0;
}
