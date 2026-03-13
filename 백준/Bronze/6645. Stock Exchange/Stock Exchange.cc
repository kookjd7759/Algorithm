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

int Parse(string s) {
    int p = s.find('.');
    return stoi(s.substr(0, p)) * 1000 + stoi(s.substr(p + 1));
}

int main() {
    Sync;

    while (1) {
        int N; string code; in N >> code;
        if (!N && code == "END") break;

        vector<string> name(N), type(N);
        vector<int> price(N);
        Fori(N) {
            string p; in name[i] >> type[i] >> p;
            price[i] = Parse(p);
        }

        out code endl;
        Fori(N) {
            out name[i] << ": ";
            bool ok = 0;
            Forj(N) {
                if (i == j || type[i] == type[j]) continue;
                if (type[i] == "buy" && price[j] <= price[i]) {
                    if (ok) out " ";
                    out name[j];
                    ok = 1;
                }
                if (type[i] == "sell" && price[i] <= price[j]) {
                    if (ok) out " ";
                    out name[j];
                    ok = 1;
                }
            }
            if (!ok) out "NO-ONE";
            ent;
        }
    }

    return 0;
}