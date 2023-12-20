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

    string a, b, c = "aeiou";
    in a >> b;
    bool cha = false, chb = false;
    int la = a.size() - 1, lb = 0, ia = a.size(), ib = b.size();
    For1i(ia - 1) if (c.find(a[i]) != string::npos) {
        la = i;
        cha = true;
        break;
    }

    for (int i = ib - 2; i >= 0; i--)
        if (c.find(b[i]) != string::npos) {
            lb = i;
            chb = true;
            break;
        }

    if (!cha && !chb) out a << 'o' << b;
    else if (!chb) out a.substr(0, la + 1) << b;
    else if (!cha) out a << b.substr(lb, ib - lb);
    else out a.substr(0, la) << b.substr(lb, ib - lb);
}