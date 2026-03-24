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

int main() {
    Sync;

    int n; in n; cin.ignore();
    list<string> lst;
    vector<string> ans;

    Fori(n) {
        string s; getline(cin, s);
        if (s.substr(0, 4) == "Run ") {
            string app = s.substr(4);
            lst.push_front(app);
            ans.push_back(app);
        } else {
            int k = 0;
            for (int j = 0; j + 3 < (int)s.size(); ++j) if (s.substr(j, 4) == "+Tab") ++k;
            int mv = k % (int)lst.size();
            auto it = lst.begin();
            while (mv--) ++it;
            string app = *it;
            lst.erase(it);
            lst.push_front(app);
            ans.push_back(app);
        }
    }

    for (string &s : ans) out s endl;

    return 0;
}