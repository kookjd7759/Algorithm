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

    string s; in s;
    int n = (int)s.size(), ans = 0;

    for (int i = 0; i + 2 < n; ) {
        if (s[i + 1] == s[i] + 1 && s[i + 2] == s[i] + 2) {
            if ((i == 0 || s[i - 1] != s[i] - 1) && (i + 3 >= n || s[i + 3] != s[i + 2] + 1)) ++ans;
            int j = i + 2;
            while (j + 1 < n && s[j + 1] == s[j] + 1) ++j;
            i = j + 1;
        } else ++i;
    }

    out ans endl;

    return 0;
}
