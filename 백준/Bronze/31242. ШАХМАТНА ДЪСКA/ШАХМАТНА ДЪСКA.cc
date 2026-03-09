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

    vector<pair<int,int>> pos(21);
    Fori(4) Forj(5){
        int x; in x;
        pos[x]={i,j};
    }

    int ans=1;
    for(int v=1;v<20;v++){
        int x1=pos[v].first, y1=pos[v].second;
        int x2=pos[v+1].first, y2=pos[v+1].second;
        int dx=abs(x1-x2), dy=abs(y1-y2);
        if(!((dx==1&&dy==2)||(dx==2&&dy==1))) break;
        ans=v+1;
    }

    out ans;

    return 0;
}