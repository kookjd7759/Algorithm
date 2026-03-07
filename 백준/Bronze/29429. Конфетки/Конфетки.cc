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

    string a, b; in a >> b;
    int n = min((int)a.size(), (int)b.size()), best = 1e9, maskAns = -1;

    auto val = [&](const string& s) {
        ll x = 0;
        for(char c : s) x = x * 10 + (c - '0');
        return x;
    };

    for(int mask = 0; mask < (1 << n); ++mask) {
        string x = a, y = b;
        Fori(n) if(mask & (1 << i)) swap(x[i], y[i]);
        if(val(x) > val(y)) {
            int cnt = __builtin_popcount((unsigned)mask);
            if(cnt < best) best = cnt, maskAns = mask;
        }
    }

    if(maskAns == -1) {
        out "Bad luck\n";
        return 0;
    }

    out best endl;
    bool first = true;
    Fori(n) if(maskAns & (1 << i)) {
        if(!first) out " ";
        out i + 1;
        first = false;
    }
    out "\n";

    return 0;
}