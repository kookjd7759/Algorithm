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

    auto isSame = [&](string st) -> bool {
        char first = st[0];
        Fori(st.size()) if (first != st[i]) return false;
        return true;
        };

    auto isIncrease = [&](string st) -> bool {
        Fori(st.size() - 1) {
            if (st[i] >= st[i + 1]) return false;
        }
        return true;
        };

    int n, ret(2e9); in n;
    Fori(n) {
        string num; in num;
        if (isSame(num) || isIncrease(num))
            ret = min(ret, stoi(num));
    }
    if (ret == 2e9) out "NERASTA";
    else out ret;
}