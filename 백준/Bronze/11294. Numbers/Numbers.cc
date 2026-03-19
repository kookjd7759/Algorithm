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

string Conv(int x, int b) {
    if (!x) return "0";
    string s;
    while (x) {
        int r = x % b;
        s += (r < 10 ? char('0' + r) : char('A' + r - 10));
        x /= b;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    Sync;

    string name;
    while (getline(cin, name)) {
        if (name == "#") break;
        int b, x; in b; in x;
        cin.ignore();
        out name << ", " << x << ", " << Conv(x, b) << "\n";
    }

    return 0;
}