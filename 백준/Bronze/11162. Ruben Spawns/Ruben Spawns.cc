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
    while(T--){
        int W, M; in W >> M;
        vector<int> c(M); Fori(M) in c[i];
        sort(c.begin(), c.end(), greater<int>());

        int sum = 0, ans = 0;
        Fori(M){
            sum += c[i];
            ans++;
            if(sum >= W) break;
        }

        if(sum >= W) out ans << "\n";
        else out "no rest for Ruben\n";
    }

    return 0;
}