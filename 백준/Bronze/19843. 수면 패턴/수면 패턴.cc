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

    int T, N; in T >> N;
    auto day = [&](const string& s) { return s=="Mon"?0:s=="Tue"?1:s=="Wed"?2:s=="Thu"?3:4; };

    int sum = 0;
    Fori(N) {
        string D1, D2; int H1, H2; in D1 >> H1 >> D2 >> H2;
        int a = day(D1) * 24 + H1, b = day(D2) * 24 + H2;
        sum += b - a;
    }

    int need = T - sum;
    if (need <= 0) out 0 endl;
    else if (need > 48) out -1 endl;
    else out need endl;

    return 0;
}
