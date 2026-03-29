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
    int n, m; in n >> m;
    vector<int> first;
    For1i(n) {
        int r; in r;
        first.insert(first.begin() + (r - 1), i);
    }
    vector<int> start2;
    for (int i = m - 1; i >= 0; --i) start2.push_back(first[i]);
    vector<int> second;
    Fori(m) {
        int r; in r;
        second.insert(second.begin() + (r - 1), start2[i]);
    }
    out second[0] endl;
    out second[1] endl;
    out second[2] endl;
    return 0;
}