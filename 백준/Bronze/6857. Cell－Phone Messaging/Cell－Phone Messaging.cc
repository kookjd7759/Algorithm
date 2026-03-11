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

    vector<string> v = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int key[26], cnt[26];
    Fori(8) Forj(v[i].size()) key[v[i][j]-'a']=i, cnt[v[i][j]-'a']=j+1;

    string s;
    while(in s) {
        if(s=="halt") break;
        int ans = cnt[s[0]-'a'];
        for(int i=1;i<s.size();++i) {
            if(key[s[i]-'a']==key[s[i-1]-'a']) ans += 2;
            ans += cnt[s[i]-'a'];
        }
        out ans endl;
    }

    return 0;
}