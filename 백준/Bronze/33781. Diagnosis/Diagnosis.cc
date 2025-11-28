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
    int n, m;
    in n >> m;
    int k;
    in k;
    vector<int> chosen(n + 1, 0);
    Fori(k) {
        int d;
        in d;
        chosen[d] = 1;
    }
    vector<int> seen(m + 1, 0);
    For1i(n) {
        int p;
        in p;
        Forj(p) {
            int s;
            in s;
            if (chosen[i]) seen[s] = 1;
        }
    }
    bool ok = true;
    For1i(m) {
        if (!seen[i]) {
            ok = false;
            break;
        }
    }
    if (ok) out "yes";
    else out "no";
}
