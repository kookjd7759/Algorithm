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


    while (true) {
        int n; in n;
        if (!n) break;

        string ans("");
        int cursor(0);

        Fori(n) {
            string st; char c; in st >> c;
            if (st[0] == 'I') {
                if (cursor == 0) ans = c + ans;
                else if (ans.size() == cursor) ans = ans + c;
                else ans = ans.substr(0, cursor) + c + ans.substr(cursor, ans.size() - cursor + 1);
                ++cursor;
            }
            else if (st[0] == 'L') {
                if (cursor) --cursor;
            }
            else if (st[0] == 'R') {
                if (cursor < ans.size()) ++cursor;
            }
        }

        out ans endl;
    }
}