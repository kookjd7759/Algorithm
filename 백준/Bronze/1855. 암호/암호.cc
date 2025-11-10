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

    int K; in K;
    string enc; in enc;
    int N = enc.size(), rows = N / K;

    vector<string> grid(rows, string(K, ' '));

    int idx = 0;
    for (int r = 0; r < rows; ++r) {
        if (r % 2 == 0)
            for (int c = 0; c < K; ++c) grid[r][c] = enc[idx++];
        else
            for (int c = K - 1; c >= 0; --c) grid[r][c] = enc[idx++];
    }

    for (int c = 0; c < K; ++c)
        for (int r = 0; r < rows; ++r)
            out grid[r][c];
    ent;
}
