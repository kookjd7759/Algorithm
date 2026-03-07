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

struct Line{
    ll m, b;
    ll Get(ll x) const { return m * x + b; }
};

struct LiChao{
    struct Node{
        Line ln;
        int l = -1, r = -1;
        bool has = false;
    };
    vector<Node> tr;
    int s, e;

    LiChao(int _s, int _e){ s = _s, e = _e; tr.push_back({}); }

    void Add(Line nw, int node, int l, int r){
        if(!tr[node].has){ tr[node].ln = nw; tr[node].has = true; return; }
        int m = (l + r) >> 1;
        bool lef = nw.Get(l) < tr[node].ln.Get(l);
        bool mid = nw.Get(m) < tr[node].ln.Get(m);
        if(mid) swap(tr[node].ln, nw);
        if(l == r) return;
        if(lef != mid){
            if(tr[node].l == -1){ tr[node].l = tr.size(); tr.push_back({}); }
            Add(nw, tr[node].l, l, m);
        } else {
            if(tr[node].r == -1){ tr[node].r = tr.size(); tr.push_back({}); }
            Add(nw, tr[node].r, m + 1, r);
        }
    }

    ll Query(int x, int node, int l, int r){
        ll ret = tr[node].has ? tr[node].ln.Get(x) : (ll)4e18;
        if(l == r) return ret;
        int m = (l + r) >> 1;
        if(x <= m && tr[node].l != -1) ret = min(ret, Query(x, tr[node].l, l, m));
        if(x > m && tr[node].r != -1) ret = min(ret, Query(x, tr[node].r, m + 1, r));
        return ret;
    }

    void Add(Line nw){ Add(nw, 0, s, e); }
    ll Query(int x){ return Query(x, 0, s, e); }
};

int main() {
    Sync;

    int n; in n;
    vector<ll> t(n + 1), dp(n + 1);
    For1i(n) in t[i];

    LiChao lichao(1, n);
    dp[1] = 0;
    lichao.Add({t[1], dp[1] - 1LL * t[1]});

    for(int i = 2; i <= n; ++i){
        dp[i] = lichao.Query(i);
        lichao.Add({t[i], dp[i] - 1LL * i * t[i]});
    }

    out dp[n] endl;

    return 0;
}