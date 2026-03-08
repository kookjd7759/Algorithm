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

struct Hotel {
    int bed, cap, avail, price, idx;
    string name;
};

int main() {
    Sync;

    int T; in T;
    For1i(T) {
        int N, M; in N >> M;
        vector<Hotel> h(N);
        Forj(N) in h[j].bed >> h[j].cap >> h[j].avail >> h[j].price >> h[j].name, h[j].idx = j;

        out "Case #" << i << ":" << '\n';

        Forj(M) {
            char type; int people, mx; in type >> people >> mx;
            int L = 0, R = 0;
            if (type == 'A') L = 20, R = 35;
            else if (type == 'B') L = 36, R = 48;
            else L = 49, R = 62;

            ll bestCost = (ll)4e18;
            int bestBed = -1, bestIdx = (int)1e9;
            string bestName = "";

            for (auto &x : h) {
                if (x.bed < L || x.bed > R) continue;
                int use = min(x.cap, mx);
                if (use == 0) continue;
                ll rooms = (people + use - 1) / use;
                if (rooms > x.avail) continue;
                ll cost = rooms * x.price;

                if (cost < bestCost || (cost == bestCost && x.bed > bestBed) || (cost == bestCost && x.bed == bestBed && x.idx < bestIdx)) {
                    bestCost = cost;
                    bestBed = x.bed;
                    bestIdx = x.idx;
                    bestName = x.name;
                }
            }

            if (bestCost == (ll)4e18) out "no-hotel" << '\n';
            else out bestCost spc bestName << '\n';
        }
    }

    return 0;
}