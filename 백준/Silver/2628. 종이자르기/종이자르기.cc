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

    int w, h, n; in w >> h >> n;
    vector<int> vec0, vec1; 
    vec0.push_back(0); vec1.push_back(0);
    Fori(n) {
        int v, l; in v >> l;
        v == 0 ? vec0.push_back(l) : vec1.push_back(l);
    }
    vec0.push_back(h); vec1.push_back(w);
    sort(vec0.begin(), vec0.end());
    sort(vec1.begin(), vec1.end());
    int max0(0), max1(0);
    Fori(vec0.size() - 1) max0 = max(max0, vec0[i + 1] - vec0[i]);
    Fori(vec1.size() - 1) max1 = max(max1, vec1[i + 1] - vec1[i]);

    out max0 * max1;
}