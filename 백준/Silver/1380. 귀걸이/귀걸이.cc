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

    int n;
    int scenario = 1;
    while (true) {
        in n;
        if (!cin || n == 0) break;
        string tmp;
        getline(cin, tmp);
        vector<string> names(n + 1);
        For1i(n) getline(cin, names[i]);
        vector<int> cnt(n + 1, 0);
        int lines = 2 * n - 1;
        Fori(lines) {
            int idx;
            char c;
            cin >> idx >> c;
            cnt[idx] ^= 1;
        }
        int missing = 1;
        For1i(n) if (cnt[i]) { missing = i; break; }
        out scenario spc names[missing] << "\n";
        ++scenario;
    }

    return 0;
}
