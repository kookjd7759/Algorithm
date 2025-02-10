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

    int n, a, b, s, t; in n >> a >> b >> s >> t;

    bool s_city = (a + 1 <= s && s <= b - 1);
    bool t_city = (a + 1 <= t && t <= b - 1);

    bool s_outside = (s <= a || s >= b);
    bool t_outside = (t <= a || t >= b);

    if (s_city && t_city) out "City" endl;
    else if (s_outside && t_outside && ((s <= a && t <= a) || (s >= b && t >= b))) out "Outside" endl;
    else out "Full" endl;
}