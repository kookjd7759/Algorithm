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

    int N; in N;
    vector<ll> p(N), c(N);
    Fori(N) in p[i];
    Fori(N) in c[i];

    ll mx1=-1, mx2=-1; int idx=-1;
    Fori(N){
        if(p[i]>mx1){ mx2=mx1; mx1=p[i]; idx=i; }
        else if(p[i]>mx2) mx2=p[i];
    }

    Fori(N){
        ll mx = (i==idx ? mx2 : mx1);
        ll net = p[i] - mx;
        out net << (i+1<N ? " " : "");
    }

    return 0;
}