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

    int N, M;
    in N >> M;

    vector<vector<int>> a(N, vector<int>(M));
    Fori(N) {
        Forj(M) in a[i][j];
        sort(a[i].begin(), a[i].end(), greater<int>());
    }

    vector<int> score(N, 0);

    Forj(M) {
        int mx = 0;
        Fori(N) if (a[i][j] > mx) mx = a[i][j];
        Fori(N) if (a[i][j] == mx) ++score[i];
    }

    int best = 0;
    Fori(N) if (score[i] > best) best = score[i];

    bool first = true;
    For1i(N) {
        if (score[i - 1] == best) {
            if (!first) out " ";
            out i;
            first = false;
        }
    }

    return 0;
}
