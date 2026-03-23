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

    int N; in N;
    while (N--) {
        string s; in s;
        int sum = 0, prv = 0, ans = 0;
        bool stop = 0, weapon = 0, perm = 0;
        for (char c : s) {
            if (stop) break;
            int x = '0' <= c && c <= '9' ? c - '0' : c - 'A' + 10;
            sum += x;
            int q = sum / 10;
            if (q > prv) {
                if (q <= 3) ans += q;
                else if (q == 4) stop = 1, weapon = 1;
                else stop = 1, perm = 1;
                prv = q;
            }
        }
        out ans;
        if (weapon) out "(weapon)";
        else if (perm) out "(09)";
        ent;
    }

    return 0;
}