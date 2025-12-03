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
    int U, N;
    in U >> N;
    vector<pair<string,int>> bids;
    bids.reserve(N);
    vector<int> cnt(U + 1, 0);
    unordered_set<string> seen;
    seen.reserve(N * 2);
    Fori(N) {
        string s;
        int p;
        in s >> p;
        bids.push_back({s, p});
        string key = s + "#" + to_string(p);
        if (seen.insert(key).second) cnt[p]++;
    }
    int bestCnt = INT_MAX, bestPrice = -1;
    For1i(U) {
        if (cnt[i] == 0) continue;
        if (cnt[i] < bestCnt) {
            bestCnt = cnt[i];
            bestPrice = i;
        } else if (cnt[i] == bestCnt && i < bestPrice) {
            bestPrice = i;
        }
    }
    string winner;
    Fori(N) {
        if (bids[i].second == bestPrice) {
            winner = bids[i].first;
            break;
        }
    }
    out winner spc bestPrice;
}
