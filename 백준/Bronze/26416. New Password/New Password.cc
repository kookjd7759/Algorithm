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

    int T; in T;
    For1k(T) {
        int n; string st;
        in n >> st;
        bool upper = false, lower = false, digit = false, special = false;
        Fori(st.size()) {
            if (isupper(st[i])) upper = true;
            else if (islower(st[i])) lower = true;
            else if ('0' <= st[i] && st[i] <= '9') digit = true;
            else if (st[i] == '#' || st[i] == '@' ||
                st[i] == '*' || st[i] == '&') special = true;
        }

        if (!upper) st += 'A';
        if (!lower) st += 'a';
        if (!digit) st += '0';
        if (!special) st += '#';
        while (st.size() < 7) st += 'a';
        out "Case #" << k << ": " << st endl;
    }
}