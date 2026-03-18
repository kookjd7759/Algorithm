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

bool Ok(int x) {
    string s = to_string(x), t = "";
    for (int i = (int)s.size() - 1; i >= 0; --i) {
        if (s[i] == '0' || s[i] == '1' || s[i] == '8') t += s[i];
        else if (s[i] == '6') t += '9';
        else if (s[i] == '9') t += '6';
        else return false;
    }
    return s == t;
}

int main() {
    Sync;

    int m, n; in m >> n;
    int ans = 0;
    for (int i = m; i <= n; ++i) if (Ok(i)) ++ans;
    out ans endl;

    return 0;
}