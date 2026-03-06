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

string phase(int d){
    d %= 28;
    if(d == 0) return "New";
    if(d <= 4) return "Crescent";
    if(d <= 8) return "Quarter";
    if(d <= 13) return "Gibbous";
    if(d == 14) return "Full";
    if(d <= 19) return "Gibbous";
    if(d <= 22) return "Quarter";
    return "Crescent";
}

int main() {
    Sync;

    int n; in n;
    vector<string> obs(n); Fori(n) in obs[i];

    for(int k = 1; k <= 28; k++){
        bool ok = true;
        Fori(n){
            int day = ((i + 1) * k) % 28;
            if(phase(day) != obs[i]){ ok = false; break; }
        }
        if(ok){
            out k;
            return 0;
        }
    }

    return 0;
}