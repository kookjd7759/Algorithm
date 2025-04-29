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

    int h_lo, h_hi, s_lo, s_hi, v_lo, v_hi;
    in h_lo >> h_hi;
    in s_lo >> s_hi;
    in v_lo >> v_hi;

    int R, G, B; in R >> G >> B;

    int M = max({ R, G, B }), m = min({ R, G, B });
    int V = M;
    double S = 255.0 * (V - m) / V;
    double H;

    if (V == R)  H = 60.0 * (G - B) / (V - m);
    else if (V == G) H = 120.0 + 60.0 * (B - R) / (V - m);
    else H = 240.0 + 60.0 * (R - G) / (V - m);

    if (H < 0) H += 360.0;

    if (h_lo <= H && H <= h_hi && s_lo <= S && S <= s_hi && v_lo <= V && V <= v_hi) 
        out "Lumi will like it." endl;
    else out "Lumi will not like it." endl;
}