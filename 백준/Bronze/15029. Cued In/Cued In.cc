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

    int N, red = 0, mx = 0, sum = 0; in N;
    Fori(N) {
        string s; in s;
        if (s == "red") red++;
        else if (s == "yellow") mx = max(mx, 2), sum += 2;
        else if (s == "green") mx = max(mx, 3), sum += 3;
        else if (s == "brown") mx = max(mx, 4), sum += 4;
        else if (s == "blue") mx = max(mx, 5), sum += 5;
        else if (s == "pink") mx = max(mx, 6), sum += 6;
        else if (s == "black") mx = max(mx, 7), sum += 7;
    }

    if (!red) out sum endl;
    else if (!mx) out 1 endl;
    else out 1LL * red * (mx + 1) + sum endl;

    return 0;
}