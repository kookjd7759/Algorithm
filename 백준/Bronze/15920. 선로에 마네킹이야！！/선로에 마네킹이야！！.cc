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

    int N; string S; in N; in S;
    int pos = 0, lever = 0, track = 0, ans = 0, bPulled = 0;
    Fori(N) {
        char c = S[i];
        if (c == 'P') { lever ^= 1; if (pos == 1) bPulled = 1; }
        else {
            if (pos == 0) { track = lever; pos = 1; }
            else if (pos == 1) { pos = 2; ans = bPulled ? 6 : (track ? 1 : 5); }
        }
    }
    out ans endl;

    return 0;
}
