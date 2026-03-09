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

vector<int> Z(const string& s){
    int n=s.size();
    vector<int> z(n);
    z[0]=n;
    for(int i=1,l=0,r=0;i<n;i++){
        if(i<=r) z[i]=min(r-i+1,z[i-l]);
        while(i+z[i]<n&&s[z[i]]==s[i+z[i]]) z[i]++;
        if(i+z[i]-1>r) l=i,r=i+z[i]-1;
    }
    return z;
}

int main() {
    Sync;

    int T; in T;
    For1i(T){
        string s; in s;
        int n=s.size();
        vector<int> z=Z(s);
        int midMax=0, ans=0;

        for(int j=1;j<n;j++) midMax=max(midMax,min({z[j],j,(n-j)/2}));
        for(int j=1;j<n;j++) if(j+z[j]==n&&z[j]<=midMax) ans=max(ans,z[j]);

        out "Case " << i << ": ";
        if(ans==0) out -1 endl;
        else out s.substr(0,ans) endl;
    }

    return 0;
}