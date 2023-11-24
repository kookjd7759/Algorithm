#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define Interactive cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    double x1, v1, x2, v2, t; in x1 >> v1 >> x2 >> v2 >> t;
    bool swap_ch = false;
    if (x1 > x2) {
        swap(x1, x2);
        swap(v1, v2);
        swap_ch = true;
    }

    double retx1, retx2;
    double d = (x2 - x1) / (v1 - v2);
    if (v1 - v2 <= 0 || t <= d) { // 충돌 불가능, 충돌 가능 But 시간이 그만큼 안 감
        retx1 = x1 + v1 * t;
        retx2 = x2 + v2 * t;
    }
    else { // 충돌 가능
        retx1 = x1 + v1 * d;
        retx2 = x2 + v2 * d;

        swap(v1, v2);
        retx1 += v1 * (t - d);
        retx2 += v2 * (t - d);
    }

    if (swap_ch) {
        swap(retx1, retx2);
        swap(v1, v2);
    }
    if (retx1 > 0) retx1 += 0.5; else retx1 -= 0.5;
    if (retx2 > 0) retx2 += 0.5; else retx2 -= 0.5;
    if (v1 > 0) v1 += 0.5; else v1 -= 0.5;
    if (v2 > 0) v2 += 0.5; else v2 -= 0.5;
    out (int)retx1 spc (int)v1 endl;
    out (int)retx2 spc (int)v2;
}