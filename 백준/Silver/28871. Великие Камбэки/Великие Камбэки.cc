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

    string s; in s;
    int p = s.find(':'), a = stoi(s.substr(0, p)), b = stoi(s.substr(p + 1));

    int ans = 0;
    for (int k = 0; k <= a + b; ++k) {
        int seg = k + 1;

        int x = (seg + 1) / 2, y = seg / 2;
        int amin = x ? 2 * x - 1 : 0, bmin = 2 * y;
        if (a >= amin && b >= bmin) ans = k;

        x = seg / 2, y = (seg + 1) / 2;
        amin = 2 * x, bmin = y ? 2 * y - 1 : 0;
        if (a >= amin && b >= bmin) ans = k;
    }

    out ans endl;

    return 0;
}