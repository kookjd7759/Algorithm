#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    Testcase{

    string st[3];
    int slen[3];
    Fori(3) in st[i], slen[i] = st[i].length();

    bool ch = false;
    Fori(3) {
        if (ch) break;
        for (int j = i + 1; j < 3; j++) {
            if (ch) break;

            if (slen[i] <= slen[j]) {
                if (st[j].substr(0, slen[i]) == st[i] ||
                    st[j].substr(slen[j] - slen[i], slen[i]) == st[i]) {
                    ch = true;
                    break;
                }
            }
            else if (slen[i] >= slen[j]) {
                if (st[i].substr(0, slen[j]) == st[j] ||
                    st[i].substr(slen[i] - slen[j], slen[j]) == st[j]) {
                    ch = true;
                    break;
                }
            }
        }
    }
    out(ch ? "No" : "Yes") endl;

    };
}