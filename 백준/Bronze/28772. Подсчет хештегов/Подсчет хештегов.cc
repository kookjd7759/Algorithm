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

    string s; getline(cin, s);
    map<string,int> mp;

    string cur = "";
    for(char c : s){
        if(c == ' '){
            if(!cur.empty()){
                if(cur.size() >= 2 && cur[0] == '#'){
                    bool ok = 1;
                    for(int i=1;i<cur.size();i++) if(cur[i]=='#') ok=0;
                    if(ok) mp[cur]++;
                }
                cur.clear();
            }
        }else cur += c;
    }

    if(!cur.empty()){
        if(cur.size() >= 2 && cur[0] == '#'){
            bool ok = 1;
            for(int i=1;i<cur.size();i++) if(cur[i]=='#') ok=0;
            if(ok) mp[cur]++;
        }
    }

    out mp.size() endl;
    for(auto &p: mp) out p.first spc p.second endl;

    return 0;
}