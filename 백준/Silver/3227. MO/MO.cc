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
    int P, N; in P >> N;
    vector<int> a(P + 1);
    Fori(N) {
        int x; in x;
        int me = (i % 2 == 0 ? 1 : 2), op = 3 - me;
        a[x] = me;
        vector<int> del;
        for (int d : {-1, 1}) {
            int cur = x + d;
            vector<int> tmp;
            while (1 <= cur && cur <= P && a[cur] == op) tmp.push_back(cur), cur += d;
            if (!tmp.empty() && 1 <= cur && cur <= P && a[cur] == me) for (int v : tmp) del.push_back(v);
        }
        for (int v : del) a[v] = 0;
    }
    int w = 0, b = 0;
    For1i(P) if (a[i] == 1) ++w; else if (a[i] == 2) ++b;
    out w spc b;
    return 0;
}