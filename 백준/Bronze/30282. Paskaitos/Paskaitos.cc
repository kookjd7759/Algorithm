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
    
    const int N = 10;
    int day[N], st[N], en[N];
    ll total = 0;
    
    Fori(N) {
        int s, hpr, mpr, hpb, mpb;
        in s >> hpr >> mpr >> hpb >> mpb;
        day[i] = s;
        st[i] = hpr * 60 + mpr;
        en[i] = hpb * 60 + mpb;
        total += en[i] - st[i];
    }
    
    Fori(N) {
        Forj(N) {
            if (j <= i) continue;
            if (day[i] != day[j]) continue;
            if (!(en[i] <= st[j] || en[j] <= st[i])) {
                out "NE\n";
                out i + 1 spc j + 1;
                return 0;
            }
        }
    }
    
    out "TAIP\n";
    out (total / 60) spc (total % 60);
}
