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

    int N; in N;
    while (N--) {
        string s, t = ""; in s;
        for (int i = 0; i < (int)s.size(); ++i) {
            if (s[i] != 'c') t += s[i];
            else {
                if (i + 1 < (int)s.size() && s[i + 1] == 'h') t += 'c', ++i;
                else if (i + 1 == (int)s.size()) t += 'k';
                else {
                    char nxt = s[i + 1];
                    if (nxt == 'e' || nxt == 'i' || nxt == 'y') t += 's';
                    else if (nxt == 'a' || nxt == 'o' || nxt == 'u') t += 'k';
                    else t += 'k';
                }
            }
        }
        out t endl;
    }

    return 0;
}