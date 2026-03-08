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

tuple<ll,ll,ll> Solve(ll a, ll b, ll c) {
    int known = (a != -1) + (b != -1) + (c != -1);

    if (known == 3) return {a, b, c};

    if (known == 2) {
        if (a == -1) a = c - b;
        else if (b == -1) b = c - a;
        else c = a + b;
        return {a, b, c};
    }

    if (known == 1) {
        if (c != -1) {
            if (c == 0) return {0, 0, 0};
            return {-1, -1, c};
        }
        if (a != -1) return {a, -1, -1};
        return {-1, b, -1};
    }

    return {-1, -1, -1};
}

int main() {
    Sync;

    ll s1, g1, sh1, s2, g2, sh2;
    in s1 >> g1 >> sh1;
    in s2 >> g2 >> sh2;

    tie(s1, g2, sh2) = Solve(s1, g2, sh2);
    tie(s2, g1, sh1) = Solve(s2, g1, sh1);

    out s1 spc g1 spc sh1 endl;
    out s2 spc g2 spc sh2 endl;

    return 0;
}