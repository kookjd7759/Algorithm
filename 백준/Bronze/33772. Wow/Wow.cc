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

    int N;
    in N;
    string r0, r1;
    in r0;
    in r1;

    string vt = "\\../";
    string vb = ".\\/.";
    string wt = "\\../\\../";
    string wb = ".\\/..\\/.";

    string res;
    int i = 0;
    while (i < N) {
        if (r0[i] == '.' && r1[i] == '.') {
            ++i;
            continue;
        }

        if (i + 7 < N &&
            r0.compare(i, 8, wt) == 0 &&
            r1.compare(i, 8, wb) == 0) {
            res.push_back('w');
            i += 8;
        } else {
            res.push_back('v');
            i += 4;
        }
    }

    out res endl;

    return 0;
}
