#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define el << "\n"
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

	while (true) {
        int a, b, c, d; in a >> b >> c >> d;
        if (!a && !b && !c && !d) break;

        if (a < b) swap(a, b);
        if (c < d) swap(c, d);

        int s(1), e(100), ret;
        while (s <= e) {
            int mid = (s + e) / 2;
            if (a * mid <= c * 100 && b * mid <= d * 100) {
                s = mid + 1;
                ret = mid;
            }
            else e = mid - 1;
        }
        out ret << "%\n";
	}
}
