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
    For1i(T){
        string s; in s;
        vector<int> cnt(10,0), d; d.reserve((int)s.size());
        for(char c: s){ int x=c-'0'; cnt[x]++; d.push_back(x); }
        string ans="";
        vector<int> p=d;
        while(next_permutation(p.begin(), p.end())) if(p[0]!=0){ ans.resize(p.size()); Forj((int)p.size()) ans[j]=char('0'+p[j]); break; }
        if(ans.empty()){
            vector<int> c2=cnt; c2[0]++;
            string t=""; t.reserve(s.size()+1);
            int first=1; while(first<=9 && c2[first]==0) first++;
            t.push_back(char('0'+first)); c2[first]--;
            Forj(c2[0]) t.push_back('0'); c2[0]=0;
            For1j(9) Fork(c2[j]) t.push_back(char('0'+j));
            ans=t;
        }
        out "Case #" << i << ": " << ans endl;
    }
    return 0;
}
