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

    while (1) {
        int n; in n;
        if (!n) break;
        string s; cin.ignore(); getline(cin, s);
        vector<bool> chk(n + 1, false);
        string cur = "";
        for (char c : s) {
            if (c == ',') {
                int p = cur.find('-');
                if (p == string::npos) {
                    int x = stoi(cur);
                    if (1 <= x && x <= n) chk[x] = true;
                } else {
                    int l = stoi(cur.substr(0, p)), r = stoi(cur.substr(p + 1));
                    if (l <= r) {
                        l = max(l, 1), r = min(r, n);
                        for (int i = l; i <= r; ++i) chk[i] = true;
                    }
                }
                cur = "";
            } else cur += c;
        }
        int p = cur.find('-');
        if (p == string::npos) {
            int x = stoi(cur);
            if (1 <= x && x <= n) chk[x] = true;
        } else {
            int l = stoi(cur.substr(0, p)), r = stoi(cur.substr(p + 1));
            if (l <= r) {
                l = max(l, 1), r = min(r, n);
                for (int i = l; i <= r; ++i) chk[i] = true;
            }
        }
        int ans = 0;
        For1i(n) if (chk[i]) ++ans;
        out ans endl;
    }

    return 0;
}