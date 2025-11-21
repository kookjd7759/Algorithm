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

    int N, Q;
    in N >> Q;

    unordered_map<string, int> cnt;
    unordered_map<string, string> rep;
    cnt.reserve(N * 2);
    rep.reserve(N * 2);

    Fori(N) {
        string first, last;
        in first >> last;
        string initials;
        initials.push_back(first[0]);
        initials.push_back(last[0]);
        string fullname = first + " " + last;

        ++cnt[initials];
        if (cnt[initials] == 1) rep[initials] = fullname;
    }

    Fori(Q) {
        string ini;
        in ini;
        auto it = cnt.find(ini);
        if (it == cnt.end()) {
            out "nobody" endl;
        } else if (it->second == 1) {
            out rep[ini] endl;
        } else {
            out "ambiguous" endl;
        }
    }

    return 0;
}
