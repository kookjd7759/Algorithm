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

    int p, t; string s; in p >> t >> s;
    int n = s.size(), lim = (t - 1) / p;

    for(int l = 0; l < n; ){
        if(s[l] == 'W'){ l++; continue; }
        int r = l;
        while(r < n && s[r] != 'W') r++;

        vector<int> inf;
        for(int i = l; i < r; ++i) if(s[i] == 'I') inf.push_back(i);

        if(inf.empty()){
            for(int i = l; i < r; ++i) if(s[i] == 'H'){
                out "CURED" endl;
                return 0;
            }
        } else {
            int ptr = 0;
            for(int i = l; i < r; ++i){
                if(s[i] != 'H') continue;
                while(ptr + 1 < (int)inf.size() && abs(inf[ptr + 1] - i) <= abs(inf[ptr] - i)) ptr++;
                if(abs(inf[ptr] - i) > lim){
                    out "CURED" endl;
                    return 0;
                }
            }
        }
        l = r;
    }

    out "ALL INFECTED" endl;

    return 0;
}