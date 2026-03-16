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

    int c; in c; cin.ignore();
    while (c--) {
        string s; getline(cin, s);
        vector<int> cnt(26);
        for (char ch : s) if ('A' <= ch && ch <= 'Z') ++cnt[ch - 'A'];
        int mx = 0, idx = -1, same = 0;
        Fori(26) {
            if (cnt[i] > mx) mx = cnt[i], idx = i, same = 1;
            else if (cnt[i] == mx) ++same;
        }
        if (same != 1) {
            out "NOT POSSIBLE" endl;
            continue;
        }
        int d = (idx - ('E' - 'A') + 26) % 26;
        for (char &ch : s) if ('A' <= ch && ch <= 'Z') ch = char((ch - 'A' - d + 26) % 26 + 'A');
        out d << " " << s endl;
    }

    return 0;
}