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

bool comp(const pair<int, int>&a, const pair<int, int>&b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

void print(int n, bool* chk, const pair<int, int>* pair) {
    Fori(n) {
        if (chk[pair[i].second]) continue;
        out pair[i].second << ' ';
        chk[pair[i].second] = true;
        break;
    }
}

int main() {
    Sync;

    int n; in n;
    pair<int, int>* ko = new pair<int, int>[n];
    pair<int, int>* en = new pair<int, int>[n];
    pair<int, int>* ma = new pair<int, int>[n];
    pair<int, int>* sc = new pair<int, int>[n];
    bool* chk = new bool[n + 1]; memset(chk, false, sizeof(bool) * (n + 1));
    Fori(n) {
        int idx; in idx;
        ko[i].second = idx;
        en[i].second = idx;
        ma[i].second = idx;
        sc[i].second = idx;
        in ko[i].first >> en[i].first >> ma[i].first >> sc[i].first;
    }
    sort(ko, ko + n, comp);
    sort(en, en + n, comp);
    sort(ma, ma + n, comp);
    sort(sc, sc + n, comp);
    print(n, chk, ko);
    print(n, chk, en);
    print(n, chk, ma);
    print(n, chk, sc);
}
 