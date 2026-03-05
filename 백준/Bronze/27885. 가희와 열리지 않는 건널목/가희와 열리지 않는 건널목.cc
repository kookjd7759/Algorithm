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

static inline int tosec(const string& s){ return (s[0]-'0')*36000+(s[1]-'0')*3600+(s[3]-'0')*600+(s[4]-'0')*60+(s[6]-'0')*10+(s[7]-'0'); }

int main() {
    Sync;

    int c,h; in c >> h;
    vector<pair<int,int>> v; v.reserve(c+h);
    string s;
    Fori(c){ in s; int t=tosec(s); v.push_back({t,t+40}); }
    Fori(h){ in s; int t=tosec(s); v.push_back({t,t+40}); }

    sort(v.begin(), v.end());
    long long down=0;
    int curS=-1, curE=-1;
    for(auto &p: v){
        int a=p.first, b=p.second;
        if(curS==-1){ curS=a; curE=b; }
        else if(a<=curE) curE=max(curE,b);
        else{ down += (long long)(curE-curS); curS=a; curE=b; }
    }
    if(curS!=-1) down += (long long)(curE-curS);

    out (86400LL - down);
    return 0;
}