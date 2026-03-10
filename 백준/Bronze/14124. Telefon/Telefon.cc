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

    unsigned long long n; in n;
    int ans = 10, best = (int)1e9;

    for (int b = 2; b <= 10; ++b) {
        vector<int> v;
        unsigned long long x = n;
        if (x == 0) v.push_back(0);
        while (x) v.push_back(x % b), x /= b;
        reverse(v.begin(), v.end());

        int cur = 0;
        for (int i = 1; i < (int)v.size(); ++i) if (v[i] != v[i - 1]) ++cur;

        if (cur < best || (cur == best && b > ans)) best = cur, ans = b;
    }

    out ans endl;

    return 0;
}