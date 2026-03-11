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

bool Ok(int x, vector<int>& bad) {
    if(x == 0) return !bad[0];
    while(x) {
        if(bad[x % 10]) return false;
        x /= 10;
    }
    return true;
}

int main() {
    Sync;

    int n; in n;
    vector<int> bad(10, 0);
    Fori(n) {
        int x; in x;
        bad[x] = 1;
    }

    int target; in target;
    int ans = 1e9;

    for(int x = 0; x <= 999; ++x) if(Ok(x, bad)) ans = min(ans, abs(target - x));
    out ans endl;

    return 0;
}