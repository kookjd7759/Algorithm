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

static inline int hx(char c){ if('0'<=c&&c<='9') return c-'0'; return c-'a'+10; }

int main() {
    Sync;

    string s; in s;
    int N; in N;

    vector<int> len(N);
    string t;
    Fori(N){
        in t;
        if(t=="char") len[i]=2;
        else if(t=="int") len[i]=8;
        else len[i]=16;
    }

    size_t pos=0;
    Fori(N){
        unsigned long long val=0;
        Fork(len[i]) val=(val<<4) | (unsigned long long)hx(s[pos++]);
        if(i) out " ";
        out val;
    }
    return 0;
}