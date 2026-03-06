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
    vector<int> a(n + 1), b(n + 1);
    For1i(n) in a[i];
    For1i(n) in b[i];

    int pos = -1, neg = -1;
    For1i(n){
        int d = a[i] - b[i];
        if(d == 0){
            out 1 << "\n";
            out i;
            return 0;
        }
        if(d > 0 && pos == -1) pos = i;
        if(d < 0 && neg == -1) neg = i;
    }

    if(pos == -1 || neg == -1){
        out -1;
        return 0;
    }

    int p = a[pos] - b[pos];
    int q = b[neg] - a[neg];
    int g = gcd(p, q);
    int cp = q / g, cn = p / g;

    out cp + cn << "\n";
    Fori(cp) out pos << " ";
    Fori(cn) out neg << (i + 1 == cn ? "" : " ");

    return 0;
}