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

    ll N,M; in N >> M;
    if((N&1LL)==0 || (M&1LL)==0){ out 0; return 0; }
    auto v2=[&](unsigned long long x){ return __builtin_ctzll(x); };
    int L=min(v2((unsigned long long)N+1ULL), v2((unsigned long long)M+1ULL));
    __int128 p=((__int128)1)<<(2*L);
    __int128 ans=(p-1)/3;
    string s; if(ans==0) s="0"; else{ while(ans){ int d=(int)(ans%10); s.push_back('0'+d); ans/=10; } reverse(s.begin(), s.end()); }
    out s;
    return 0;
}