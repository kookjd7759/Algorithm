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

string Ask(int x, int y) {
    out "? " << x << " " << y << "\n";
    cout.flush();
    string s; in s;
    return s;
}

int main() {
    Sync;

    int l = 1, r = 1000, n = 1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        string res = Ask(mid, 1);
        if (res == "ArrayIndexOutOfBoundsException") r = mid - 1;
        else n = mid, l = mid + 1;
    }

    ll mx = 0;
    For1i(n) For1j(n) {
        string res = Ask(j, i);
        mx = max(mx, stoll(res));
    }

    out "! " << mx << "\n";
    cout.flush();

    return 0;
}