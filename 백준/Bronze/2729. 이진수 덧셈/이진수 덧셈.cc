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

    int T; in T;
    while (T--) {
        string a,b; in a >> b;
        string res;
        int i=a.size()-1, j=b.size()-1, carry=0;
        while(i>=0 || j>=0 || carry){
            int sum=carry;
            if(i>=0) sum+=a[i--]-'0';
            if(j>=0) sum+=b[j--]-'0';
            res.push_back((sum%2)+'0');
            carry=sum/2;
        }
        reverse(res.begin(),res.end());
        int pos=0; while(pos<res.size()-1 && res[pos]=='0') pos++;
        out res.substr(pos) endl;
    }
}
