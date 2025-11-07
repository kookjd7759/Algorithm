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

    int n; string s; in n >> s;
    vector<pair<char,string>> code = {
        {'A',"000000"},{'B',"001111"},{'C',"010011"},{'D',"011100"},
        {'E',"100110"},{'F',"101001"},{'G',"110101"},{'H',"111010"}
    };
    string ans;
    Fori(n){
        string t = s.substr(i*6,6);
        int best=10; char ch='?';
        for(auto &p: code){
            int d=0; Forj(6) d += (t[j]!=p.second[j]);
            if(d<best){ best=d; ch=p.first; }
        }
        if(best>1){ out i+1 endl; return 0; }
        ans.push_back(ch);
    }
    out ans endl;
}
