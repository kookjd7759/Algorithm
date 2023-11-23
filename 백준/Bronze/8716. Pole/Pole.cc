#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
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

    ll x1, y1, x2, y2, x3, y3, x4, y4;
    in x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (x2 < x3 || x1 > x4 || y1 < y4 || y2 > y3) out 0;
    else {
        ll lx = max(x1, x3);
        ll rx = min(x2, x4);
        ll ry = max(y2, y4);
        ll ly = min(y1, y3);
        out abs((rx - lx) * (ry - ly));
    }
}