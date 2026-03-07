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

ll Dist2(ll x1, ll y1, ll x2, ll y2){
    ll dx = x1 - x2, dy = y1 - y2;
    return dx * dx + dy * dy;
}

int main() {
    Sync;
    Fixed(10);

    ll x1, y1, x2, y2, x3, y3, a1, b1, a2, b2, a3, b3;
    in x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    in a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    vector<ll> s1 = {
        Dist2(x1, y1, x2, y2),
        Dist2(x1, y1, x3, y3),
        Dist2(x2, y2, x3, y3)
    };
    vector<ll> s2 = {
        Dist2(a1, b1, a2, b2),
        Dist2(a1, b1, a3, b3),
        Dist2(a2, b2, a3, b3)
    };

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    __int128 p1 = (__int128)s1[0] * s2[1], q1 = (__int128)s1[1] * s2[0];
    __int128 p2 = (__int128)s1[1] * s2[2], q2 = (__int128)s1[2] * s2[1];

    if(p1 != q1 || p2 != q2){
        out -1 endl;
        return 0;
    }

    long double ans = sqrt((long double)s1[0] / (long double)s2[0]);
    out ans endl;

    return 0;
}