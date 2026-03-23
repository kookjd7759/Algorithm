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

    int Z; in Z;
    while (Z--) {
        vector<string> a(5);
        Fori(5) in a[i];
        bool A = 0, B = 0;
        int dx[4] = {0, 1, 1, 1}, dy[4] = {1, 0, 1, -1};

        Fori(5) Forj(5) Fork(4) {
            int ni = i + dx[k] * 2, nj = j + dy[k] * 2;
            if (0 <= ni && ni < 5 && 0 <= nj && nj < 5) {
                if (a[i][j] == 'A' && a[i + dx[k]][j + dy[k]] == 'A' && a[ni][nj] == 'A') A = 1;
                if (a[i][j] == 'B' && a[i + dx[k]][j + dy[k]] == 'B' && a[ni][nj] == 'B') B = 1;
            }
        }

        if (A && !B) out "A wins" endl;
        else if (!A && B) out "B wins" endl;
        else out "draw" endl;
    }

    return 0;
}