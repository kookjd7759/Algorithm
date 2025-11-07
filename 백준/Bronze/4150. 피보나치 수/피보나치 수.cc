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

string addBig(const string &a, const string &b){
    string res;
    int carry=0;
    int i=a.size()-1, j=b.size()-1;
    while(i>=0 || j>=0 || carry){
        int sum=carry;
        if(i>=0) sum+=a[i--]-'0';
        if(j>=0) sum+=b[j--]-'0';
        res.push_back((sum%10)+'0');
        carry=sum/10;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
    Sync;

    int n; in n;
    if(n==1 || n==2){ out 1 endl; return 0; }
    vector<string> f(n+1);
    f[1]=f[2]="1";
    For1i(n-2) f[i+2]=addBig(f[i+1],f[i]);
    out f[n] endl;
}
