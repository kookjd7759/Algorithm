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

ll conv(string s, int base){
    ll v=0;
    Fori(s.size()){
        int d=(s[i]<='9'?s[i]-'0':s[i]-'A'+10);
        if(d>=base) return -1;
        v=v*base+d;
    }
    return v;
}

int main() {
    Sync;

    string s; in s;
    int p=s.find('+'), q=s.find('=');
    string A=s.substr(0,p), B=s.substr(p+1,q-p-1), C=s.substr(q+1);

    int mx=0;
    for(char c:s) if(isalnum(c)){
        int d=(c<='9'?c-'0':c-'A'+10);
        mx=max(mx,d);
    }

    for(int b=max(2,mx+1);b<=36;b++){
        ll x=conv(A,b), y=conv(B,b), z=conv(C,b);
        if(x!=-1&&y!=-1&&z!=-1&&x+y==z){ out b; break; }
    }

    return 0;
}