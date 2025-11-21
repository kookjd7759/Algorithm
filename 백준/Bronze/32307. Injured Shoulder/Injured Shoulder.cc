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

    int n;
    in n;
    unordered_set<string> dict;
    dict.reserve(n * 2);

    Fori(n) {
        string w;
        in w;
        dict.insert(w);
    }

    int m;
    in m;

    Fori(m) {
        string s;
        in s;

        if (dict.count(s)) {
            out 1 endl;
            continue;
        }

        bool ok = false;
        int L = (int)s.size();
        for (int cut = 1; cut < L; ++cut) {
            string a = s.substr(0, cut);
            string b = s.substr(cut);
            if (dict.count(a) && dict.count(b)) {
                ok = true;
                break;
            }
        }

        if (ok) out 2 endl;
        else out 0 endl;
    }

    return 0;
}
