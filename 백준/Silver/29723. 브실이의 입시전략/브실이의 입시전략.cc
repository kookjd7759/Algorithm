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

    int N, M, K;
    in N >> M >> K;

    vector<string> name(N);
    vector<int> score(N);
    Fori(N) in name[i] >> score[i];

    unordered_set<string> known;
    known.reserve(K * 2);
    Fori(K) {
        string t;
        in t;
        known.insert(t);
    }

    ll sumKnown = 0;
    vector<int> unknown;
    unknown.reserve(N - K);

    Fori(N) {
        if (known.find(name[i]) != known.end()) sumKnown += score[i];
        else unknown.push_back(score[i]);
    }

    sort(unknown.begin(), unknown.end());

    int extra = M - K;
    ll minScore = sumKnown;
    ll maxScore = sumKnown;

    Fori(extra) minScore += unknown[i];
    Fori(extra) maxScore += unknown[(int)unknown.size() - 1 - i];

    out minScore spc maxScore;

    return 0;
}
