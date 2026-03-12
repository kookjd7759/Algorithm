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
    vector<int> a(n);
    Fori(n) {
        string s; in s;
        int p = s.find(':');
        int h = stoi(s.substr(0, p));
        int m = stoi(s.substr(p + 1));
        a[i] = h * 60 + m;
    }

    int ans = 3, j = 0;
    Fori(n) {
        while (j < n && a[j] - a[i] <= 10) j++;
        ans = min(ans, 3 - (j - i));
    }

    out max(0, ans) << "\n";

    return 0;
}