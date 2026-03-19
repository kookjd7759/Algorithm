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

    int n; in n;
    string s; getline(cin, s);
    while (n--) {
        getline(cin, s);
        vector<int> cnt(26);
        for (char c : s) if (isalpha((unsigned char)c)) ++cnt[tolower((unsigned char)c) - 'a'];
        bool ok = true;
        Fori(26) if (cnt[i] != cnt[25 - i]) ok = false;
        out (ok ? "Yes" : "No") endl;
    }

    return 0;
}