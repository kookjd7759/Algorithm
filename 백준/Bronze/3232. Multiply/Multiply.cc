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

static inline int maxDigitStr(const string& s){ int m=0; for(char c:s) m=max(m,c-'0'); return m; }

static inline bool toVal(const string& s, int B, ll &v){
    v=0;
    for(char c:s){
        int d=c-'0';
        if(d>=B) return false;
        v = v*B + d;
    }
    return true;
}

int main() {
    Sync;

    int T; in T;
    while(T--){
        string p,q,r; in p >> q >> r;
        int mn = max({maxDigitStr(p), maxDigitStr(q), maxDigitStr(r)}) + 1;
        if(mn < 2) mn = 2;
        int ans = 0;
        for(int B=mn; B<=16; ++B){
            ll vp,vq,vr;
            if(!toVal(p,B,vp) || !toVal(q,B,vq) || !toVal(r,B,vr)) continue;
            __int128 prod = (__int128)vp * (__int128)vq;
            if(prod == (__int128)vr){ ans=B; break; }
        }
        out ans endl;
    }

    return 0;
}