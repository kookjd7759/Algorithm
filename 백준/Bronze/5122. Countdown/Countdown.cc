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

    int K; in K;
    const ll Today = 2456054;
    const ll EndMlc = 13LL * 144000;

    For1i(K) {
        ll a, b, c, d, e, j; in a >> b >> c >> d >> e; in j;
        ll cur = a * 144000 + b * 7200 + c * 360 + d * 20 + e;
        ll ans = j + (EndMlc - cur) - Today;

        out "Data Set " << i << ":" << "\n";
        if(ans < 0) out "It's a hoax!" << "\n\n";
        else if(ans == 0) out "Panic!" << "\n\n";
        else out ans << "\n\n";
    }

    return 0;
}