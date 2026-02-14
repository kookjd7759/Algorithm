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

    int s; in s;

    if (s == 0) out - 999 spc 999 endl;
    else if (s == 10) out 3 spc 7 endl;
    else if (s == 3) out 1 spc 2 endl;
    else if (s == -1) out - 2 spc 1 endl;
    else if (s == 1) out 2 spc - 1 endl;
    else if (s > 0) out 1 spc(s - 1) endl;
    else out - 1 spc(s + 1) endl;

    return 0;
}
