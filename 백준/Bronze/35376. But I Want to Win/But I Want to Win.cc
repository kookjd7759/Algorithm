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

    int c; in c;
    vector<ll> v(c); Fori(c) in v[i];
    sort(v.begin(), v.end(), greater<ll>());

    ll total = 0; Fori(c) total += v[i];
    ll me = v[1];

    vector<ll> other;
    for(int i = 2; i < c; i++) other.push_back(v[i]);
    sort(other.begin(), other.end());

    ll cur = me;
    Fori((int)other.size()){
        cur += other[i];
        if(cur * 2 > total){
            out i + 1;
            return 0;
        }
    }

    out "IMPOSSIBLE TO WIN";
    return 0;
}