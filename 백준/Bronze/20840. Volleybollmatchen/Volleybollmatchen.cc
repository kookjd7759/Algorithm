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

bool Win(int a, int b, int need){
    return (a >= need || b >= need) && abs(a - b) >= 2;
}

int main() {
    Sync;

    int N; string s; in N >> s;
    int sa = 0, sb = 0, pa = 0, pb = 0;

    for(char c : s){
        if(c == 'A') pa++;
        else pb++;

        int need = (sa + sb == 2 ? 15 : 25);
        if(Win(pa, pb, need)){
            if(pa > pb) sa++;
            else sb++;
            pa = pb = 0;
            if(sa == 2 || sb == 2) break;
        }
    }

    out sa spc sb;

    return 0;
}