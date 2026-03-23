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

    string s;
    while (getline(cin, s) && s != "END") {
        if (s.size() >= 4 && s[0] == '"') {
            size_t p = s.find('"', 1);
            if (p != string::npos && p + 2 <= s.size() && s[p + 1] == ' ') {
                string a = s.substr(1, p - 1), b = s.substr(p + 2);
                if (!a.empty() && a == b) {
                    out "Quine(" << a << ")" endl;
                    continue;
                }
            }
        }
        out "not a quine" endl;
    }

    return 0;
}