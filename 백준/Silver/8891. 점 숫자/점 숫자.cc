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

pair<ll,ll> getXY(ll v){
    ll d=1;
    while(d*(d+1)/2 < v) d++;
    ll prev=d*(d-1)/2;
    ll pos=v-prev;
    ll x=pos;
    ll y=d-pos+1;
    return {x,y};
}

ll getNum(ll x,ll y){
    ll d=x+y-1;
    ll prev=d*(d-1)/2;
    return prev+x;
}

int main(){
    Sync;

    int T; in T;
    while(T--){
        ll a,b; in a >> b;
        auto p1=getXY(a);
        auto p2=getXY(b);
        ll x=p1.first+p2.first;
        ll y=p1.second+p2.second;
        out getNum(x,y) << "\n";
    }

    return 0;
}