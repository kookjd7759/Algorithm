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

    int T; in T;
    while (T--) {
        int K; in K;
        unordered_map<int,int> ord;
        vector<int> stu(K);
        Fori(K) { in stu[i]; ord[stu[i]] = i; }

        int N; in N;
        int bestId = -1, bestOrd = 1e9;
        int bestTime = 1e9, cnt = 0;

        Fori(N) {
            int id, h, m; in id >> h >> m;
            auto it = ord.find(id);
            if (it == ord.end()) continue;
            if (h == -1) continue;
            int t = h * 60 + m;
            if (t <= 360) {
                ++cnt;
                if (t < bestTime || (t == bestTime && it->second < bestOrd)) bestTime = t, bestId = id, bestOrd = it->second;
            }
        }

        out bestId spc cnt endl;
    }

    return 0;
}
