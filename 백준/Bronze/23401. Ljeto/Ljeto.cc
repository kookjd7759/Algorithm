#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int n; in n;
    map<int, int> player_map;
    int aScore(0), bScore(0);
    Fori(n) {
        int t, p1, p2; in t >> p1 >> p2;
        if (1 <= p1 && p1 <= 4) { // A -> B
            aScore += 100;
            if (player_map.count(p1) > 0 && t - player_map[p1] <= 10) aScore += 50;
        }
        else { // B -> A
            bScore += 100;
            if (player_map.count(p1) > 0 && t - player_map[p1] <= 10) bScore += 50;
        }
        player_map[p1] = t;
    }
    out aScore spc bScore;
}