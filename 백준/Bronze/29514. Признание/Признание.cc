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

    auto build = [&](int startUpper){
        string t = s;
        int p = 0, diff = 0;
        Fori((int)t.size()){
            if(!isalpha((unsigned char)t[i])) continue;
            bool wantUpper = ((p & 1) == 0 ? startUpper : !startUpper);
            char c = t[i];
            char nc = wantUpper ? (char)toupper((unsigned char)c) : (char)tolower((unsigned char)c);
            if(nc != c) diff++;
            t[i] = nc;
            p++;
        }
        return pair<int,string>{diff, t};
    };

    auto a = build(1);
    auto b = build(0);

    out (a.first <= b.first ? a.second : b.second);
    return 0;
}