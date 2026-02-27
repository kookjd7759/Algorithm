#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define ll long long
#define out cout <<
#define in cin >>
#define endl "\n"
#define Fori(x) for(int i=0;i<(x);++i)

using namespace std;

int main() {
    Sync;
    int N, K; in N >> K;
    unordered_set<ll> st; st.reserve(N*2+10);
    auto key = [&](int x,int y)->ll{ return (ll)(x+1000)*5000LL + (ll)(y+1000); };
    Fori(N){ int x,y; in x >> y; st.insert(key(x,y)); }
    string cmd; in cmd;
    int x=0,y=0;
    for(char c: cmd){
        int nx=x, ny=y;
        if(c=='U') ny++;
        else if(c=='D') ny--;
        else if(c=='R') nx++;
        else nx--;
        if(!st.count(key(nx,ny))) { x=nx; y=ny; }
    }
    out x << " " << y << endl;
    return 0;
}