#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n";
#define ent cout << "\n";
#define out cout <<
#define in cin >>
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

bool isSet(const string& a, const string& b, const string& c) {
    Fori(4) {
        bool same = (a[i] == b[i] && b[i] == c[i]);
        bool diff = (a[i] != b[i] && b[i] != c[i] && a[i] != c[i]);
        if (!same && !diff) return false;
    }
    return true;
}

int main() {
    Sync;

    vector<vector<string>> v; vector<string> cur; string s;
    while (getline(cin, s)) {
        if (s.empty()) {
            if (!cur.empty()) v.push_back(cur), cur.clear();
        } else cur.push_back(s);
    }
    if (!cur.empty()) v.push_back(cur);

    Fori((int)v.size()) {
        auto &cards = v[i];
        out "CARDS:  ";
        Forj((int)cards.size()) {
            if (j) out " ";
            out cards[j];
        }
        out "\n";

        vector<tuple<int,int,int>> sets;
        for (int a = 0; a < (int)cards.size(); ++a) for (int b = a + 1; b < (int)cards.size(); ++b) for (int c = b + 1; c < (int)cards.size(); ++c) if (isSet(cards[a], cards[b], cards[c])) sets.push_back({a, b, c});

        if (sets.empty()) out "SETS:   *** None Found ***" << "\n";
        else {
            out "SETS:   ";
            Forj((int)sets.size()) {
                auto [a, b, c] = sets[j];
                if (j) out "        ";
                out j + 1 << ".  " << cards[a] << " " << cards[b] << " " << cards[c] << "\n";
            }
        }

        if (i + 1 != (int)v.size()) cout << "\n";
    }

    return 0;
}