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

    int T; in T;
    while (T--) {
        int m, n; in m >> n;
        vector<bool> A(10, false), B(10, false);
        Fori(m) { int x; in x; A[x] = true; }
        Fori(n) { int x; in x; B[x] = true; }
        int inter = 0, uni = 0;
        Fori(10) {
            if (A[i] || B[i]) ++uni;
            if (A[i] && B[i]) ++inter;
        }
        if (inter * 2 > uni) out 1 endl;
        else out 0 endl;
    }

    return 0;
}