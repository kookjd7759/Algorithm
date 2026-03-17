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
    vector<int> a(n);
    Fori(n) in a[i];
    int win = 0, lose = 0, rem = 4 - n;
    if (rem == 3) {
        Fori(6) Forj(6) Fork(6) {
            vector<int> v = a;
            v.push_back(i + 1), v.push_back(j + 1), v.push_back(k + 1);
            set<int> s(v.begin(), v.end());
            if ((int)s.size() == 4) ++win;
            else ++lose;
        }
    } else if (rem == 2) {
        Fori(6) Forj(6) {
            vector<int> v = a;
            v.push_back(i + 1), v.push_back(j + 1);
            set<int> s(v.begin(), v.end());
            if ((int)s.size() == 4) ++win;
            else ++lose;
        }
    } else {
        Fori(6) {
            vector<int> v = a;
            v.push_back(i + 1);
            set<int> s(v.begin(), v.end());
            if ((int)s.size() == 4) ++win;
            else ++lose;
        }
    }
    out win spc lose endl;

    return 0;
}