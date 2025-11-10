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

    int r, c; in r >> c;
    bool preferRight = true;
    Fori(r) {
        string w; in w;
        int L = (int)w.size();
        int blanks = c - L;
        int l, rr;
        if (blanks % 2 == 0) {
            l = rr = blanks / 2;
        }
        else {
            if (preferRight) { l = blanks / 2; rr = blanks - l; }
            else { rr = blanks / 2; l = blanks - rr; }
            preferRight = !preferRight;
        }
        string line(l, '.');
        line += w;
        line += string(rr, '.');
        out line << "\n";
    }
    return 0;
}
