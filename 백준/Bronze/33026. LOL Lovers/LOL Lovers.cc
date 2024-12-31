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

    int n; in n;
    string st; in st;
    int total_L(0), total_O(0);
    Fori(n) st[i] == 'L' ? ++total_L : ++total_O;

    int ret(-1);
    int left_L(0), left_O(0), right_L(total_L), right_O(total_O);
    Fori(n) {
        if (st[i] == 'L') ++left_L, --right_L;
        else ++left_O, --right_O;

        if ((left_L || left_O) && (right_L || right_O) &&
            (left_L != right_L && left_O != right_O)) {
            ret = i + 1;
            break;
        }
    }
    out ret;
}