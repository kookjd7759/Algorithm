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
#define Fori(x) for (int i = 0; i < (x); ++i)
#define Forj(x) for (int j = 0; j < (x); ++j)
#define Fork(x) for (int k = 0; k < (x); ++k)
#define For1i(x) for (int i = 1; i <= (x); ++i)
#define For1j(x) for (int j = 1; j <= (x); ++j)
#define For1k(x) for (int k = 1; k <= (x); ++k)

using namespace std;

int main() {
    Sync;
    int N; in N;
    int sr = -1, sc = -1; 
    vector<vector<int>> a(N, vector<int>(N));
    Fori(N) Forj(N) { in a[i][j]; if (a[i][j] == 2) sr = i, sc = j; }
    int p = (sr + sc) & 1;
    Fori(N) Forj(N) if (a[i][j] == 1 && (((i + j) & 1) == p)) { out "Kiriya" endl; return 0; }
    out "Lena" endl;
    return 0;
}