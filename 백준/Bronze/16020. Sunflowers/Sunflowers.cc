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

vector<vector<int>> Rot(vector<vector<int>> a) {
    int n = a.size();
    vector<vector<int>> b(n, vector<int>(n));
    Fori(n) Forj(n) b[j][n - 1 - i] = a[i][j];
    return b;
}

bool Ok(vector<vector<int>> &a) {
    int n = a.size();
    Fori(n) for (int j = 1; j < n; ++j) if (a[i][j - 1] > a[i][j]) return false;
    Forj(n) for (int i = 1; i < n; ++i) if (a[i - 1][j] > a[i][j]) return false;
    return true;
}

int main() {
    Sync;

    int N; in N;
    vector<vector<int>> a(N, vector<int>(N));
    Fori(N) Forj(N) in a[i][j];

    Fori(4) {
        if (Ok(a)) break;
        a = Rot(a);
    }

    Fori(N) {
        Forj(N) out a[i][j] << (j + 1 == N ? '\n' : ' ');
    }

    return 0;
}