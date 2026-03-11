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

    map<int,int> mp;
    mp[54]=19; mp[90]=48; mp[99]=77;
    mp[9]=34; mp[40]=64; mp[67]=86;

    int cur=1,x;
    while (in x) {
        if (x==0) { out "You Quit!\n"; break; }
        if (cur+x<=100) cur+=x;
        if (mp.count(cur)) cur=mp[cur];
        out "You are now on square " << cur << "\n";
        if (cur==100) { out "You Win!\n"; break; }
    }

    return 0;
}