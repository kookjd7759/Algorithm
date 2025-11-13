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

    int T;
    in T;
    while (T--) {
        int n;
        in n;
        vector<int> v(n + 1);
        int sum = 0;
        For1i(n) {
            in v[i];
            sum += v[i];
        }
        int mx = -1, idx = -1, cnt = 0;
        For1i(n) {
            if (v[i] > mx) {
                mx = v[i];
                idx = i;
                cnt = 1;
            } else if (v[i] == mx) {
                cnt++;
            }
        }
        if (cnt > 1) {
            out "no winner\n";
        } else {
            if (mx * 2 > sum) {
                out "majority winner " << idx << "\n";
            } else {
                out "minority winner " << idx << "\n";
            }
        }
    }

    return 0;
}
