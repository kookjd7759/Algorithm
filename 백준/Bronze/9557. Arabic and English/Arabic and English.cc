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
        int N, p = -1; in N;
        vector<string> a(N), b;
        Fori(N) {
            in a[i];
            if ('a' <= a[i][0] && a[i][0] <= 'z') p = i;
        }
        if (p == -1) b = a;
        else {
            for (int i = p + 1; i < N; ++i) b.push_back(a[i]);
            b.push_back(a[p]);
            Fori(p) b.push_back(a[i]);
        }
        Fori(N) {
            out b[i];
            if (i + 1 < N) out " ";
        }
        ent;
    }

    return 0;
}