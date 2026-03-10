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

    int N; in N;
    vector<string> a(N);
    Fori(N) in a[i];

    int tot = 0;
    Fori(N) Forj(N) if (a[i][j] == 'C') ++tot;
    int need = tot / 2;

    vector<pair<int, int>> ord;
    Fori(N) {
        if (i % 2 == 0) Forj(N) ord.push_back({i, j});
        else for (int j = N - 1; j >= 0; --j) ord.push_back({i, j});
    }

    vector<string> ans(N, string(N, '2'));
    int cur = 0, cut = -1;
    Fori((int)ord.size()) {
        int x = ord[i].first, y = ord[i].second;
        if (a[x][y] == 'C') ++cur;
        ans[x][y] = '1';
        if (cur == need) {
            cut = i;
            break;
        }
    }

    for (int i = cut + 1; i < (int)ord.size(); ++i) {
        int x = ord[i].first, y = ord[i].second;
        ans[x][y] = '2';
    }

    Fori(N) out ans[i] endl;

    return 0;
}