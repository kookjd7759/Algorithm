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
    vector<int> ok(n + 1), x(n + 1), ans;
    string s;
    For1i(n) in s >> x[i], ok[i] = (s == "TAK");

    For1i(n) if (ok[i]) {
        ans.push_back(i);
        if ((int)ans.size() == 10) break;
    }

    For1i(n) if (ok[i]) {
        bool used = 0;
        for (int v : ans) if (v == i) used = 1;
        if (!used && x[i] < 2) ans.push_back(i);
        if ((int)ans.size() == 20) break;
    }

    sort(ans.begin(), ans.end());
    Fori(20) out ans[i] << (i + 1 == 20 ? '\n' : ' ');

    return 0;
}