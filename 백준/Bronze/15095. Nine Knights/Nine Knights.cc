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

    vector<string> a(5);
    Fori(5) in a[i];

    int cnt = 0;
    int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

    Fori(5) Forj(5) if (a[i][j] == 'k') {
        ++cnt;
        Fork(8) {
            int ni = i + dx[k], nj = j + dy[k];
            if (0 <= ni && ni < 5 && 0 <= nj && nj < 5 && a[ni][nj] == 'k') {
                out "invalid" endl;
                return 0;
            }
        }
    }

    out (cnt == 9 ? "valid" : "invalid") endl;
    return 0;
}