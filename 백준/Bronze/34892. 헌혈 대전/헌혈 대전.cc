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

    ll N, A, B, C, D, E, F, G, H; in N >> A >> B >> C >> D >> E >> F >> G >> H;
    ll cnt = 0, rx = -1, ry = -1, rz = -1;

    For1i(N + 1) {
        ll X = i - 1, S = N - X;
        ll a1 = B - C, b1 = D - A * X - C * S;
        ll a2 = F - G, b2 = H - E * X - G * S;

        bool all1 = false, all2 = false, ok1 = true, ok2 = true;
        ll y1 = -1, y2 = -1;

        if (!a1) {
            if (!b1) all1 = true;
            else ok1 = false;
        } else {
            if (b1 % a1) ok1 = false;
            else y1 = b1 / a1;
        }

        if (!a2) {
            if (!b2) all2 = true;
            else ok2 = false;
        } else {
            if (b2 % a2) ok2 = false;
            else y2 = b2 / a2;
        }

        if (!ok1 || !ok2) continue;

        if (all1 && all2) {
            if (S + 1 >= 1) {
                if (cnt + (S + 1) >= 2) {
                    out 1 << "\n";
                    return 0;
                }
                cnt += S + 1;
                rx = X; ry = 0; rz = S;
            }
        } else if (all1) {
            if (0 <= y2 && y2 <= S) {
                ++cnt;
                rx = X; ry = y2; rz = S - y2;
            }
        } else if (all2) {
            if (0 <= y1 && y1 <= S) {
                ++cnt;
                rx = X; ry = y1; rz = S - y1;
            }
        } else {
            if (y1 == y2 && 0 <= y1 && y1 <= S) {
                ++cnt;
                rx = X; ry = y1; rz = S - y1;
            }
        }

        if (cnt >= 2) {
            out 1 << "\n";
            return 0;
        }
    }

    if (!cnt) out 2 << "\n";
    else {
        out 0 << "\n";
        out rx spc ry spc rz << "\n";
    }

    return 0;
}