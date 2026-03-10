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

    int n; in n;
    vector<int> d(n);
    Fori(n) in d[i];

    if (d[0] % 3 || d.back() % 3) return 0;

    int a = d[0] / 3, c = d.back() / 3;

    for (int b = a + 1; b < c; ++b) {
        vector<int> t = {a, b, c};
        set<int> s;
        Fori(3) Forj(3) Fork(3) s.insert(t[i] + t[j] + t[k]);
        vector<int> v(s.begin(), s.end());
        if (v == d) {
            out a spc b spc c endl;
            return 0;
        }
    }

    return 0;
}