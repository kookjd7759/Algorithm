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
    int group = 1;
    bool firstGroup = true;

    while (true) {
        in n;
        if (n == 0) break;

        if (!firstGroup) ent;
        firstGroup = false;

        vector<string> name(n);
        vector<vector<char>> msg(n, vector<char>(n - 1));

        Fori(n) {
            in name[i];
            Forj(n - 1) in msg[i][j];
        }

        vector<pair<string, string>> nasty;

        Fori(n) {
            Forj(n - 1) {
                if (msg[i][j] == 'N') {
                    int writer = (i - (j + 1) + n) % n;
                    nasty.push_back({name[writer], name[i]});
                }
            }
        }

        out "Group " << group << "\n";
        ++group;

        if (nasty.empty()) {
            out "Nobody was nasty\n";
        } else {
            Fori((int)nasty.size()) {
                out nasty[i].first << " was nasty about " << nasty[i].second << "\n";
            }
        }
    }

    return 0;
}
