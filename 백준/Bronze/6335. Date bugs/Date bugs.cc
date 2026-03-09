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

    int n, tc = 1;
    while(in n, n){
        vector<int> y(n), a(n), b(n);
        int st = 0;
        Fori(n) in y[i] >> a[i] >> b[i], st = max(st, a[i]);

        int ans = -1;
        for(int year = st; year < 10000; year++){
            bool ok = true;
            Fori(n){
                int p = b[i] - a[i];
                if(a[i] + (year - a[i]) % p != y[i]){ ok = false; break; }
            }
            if(ok){ ans = year; break; }
        }

        out "Case #" << tc++ << ":\n";
        if(ans == -1) out "Unknown bugs detected.\n\n";
        else out "The actual year is " << ans << ".\n\n";
    }

    return 0;
}