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

int toSec(const string& t){
    return (t[0]-'0')*36000 + (t[1]-'0')*3600 + (t[3]-'0')*600 + (t[4]-'0')*60 + (t[6]-'0')*10 + (t[7]-'0');
}

int main() {
    Sync;

    int n, m; in n >> m;
    vector<int> a(n), b(m);
    string s;
    Fori(n){ in s; a[i] = toSec(s); }
    Fori(m){ in s; b[i] = toSec(s); }
    int need; in need;

    int ans = INT_MAX;
    Fori(n) Forj(m) if(b[j] >= a[i] + need) ans = min(ans, b[j] - a[i]);

    out (ans == INT_MAX ? -1 : ans);
    return 0;
}