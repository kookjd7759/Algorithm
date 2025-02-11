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

    int n, m;; in n >> m;
    int** arr = new int *[n];
    Fori(n) {
        arr[i] = new int[m];
        Forj(m) {
            char c; in c;
            arr[i][j] = (c == 'c' ? 0 : -1);
        }
    }
    Fori(n) {
        int cnt(-1);
        Forj(m) {
            if (cnt == -1) {
                if (arr[i][j] == 0) cnt = 0;
                continue;
            }
            ++cnt;
            if (arr[i][j] == 0) cnt = 0;
            else arr[i][j] = cnt;
        }
    }

    Fori(n) {
        Forj(m) out arr[i][j] << ' ';
        ent;
    }
}