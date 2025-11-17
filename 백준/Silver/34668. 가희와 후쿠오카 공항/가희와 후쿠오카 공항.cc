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

    int Q;
    in Q;
    while (Q--) {
        ll M;
        in M;

        ll idx = M / 50;                   // 0-based 버스 인덱스
        ll t = 6 * 60 + 6 + idx * 12;      // 06:06부터 12분 간격

        if (t >= 24 * 60) {
            out -1 << "\n";
            continue;
        }

        int h = (int)(t / 60);
        int m = (int)(t % 60);

        cout << setw(2) << setfill('0') << h << ":"
             << setw(2) << setfill('0') << m << "\n";
    }

    return 0;
}
