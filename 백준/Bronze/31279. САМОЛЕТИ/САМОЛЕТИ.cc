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

    int N, d, ap1, ap2;
    if (!(cin >> N >> d >> ap1 >> ap2)) return 0;

    int pos1 = 0, pos2 = 0; 
    vector<char> vis1(N, 0), vis2(N, 0);
    vis1[0] = vis2[0] = 1;
    int cnt1 = 1, cnt2 = 1;         

    long long dist1 = 0, dist2 = 0; 
    long long meet = 1;             
    long long pass = 0;             

    auto step_mod = [&](int p, int dir)->int {
        p += dir;
        if (p < 0) p += N;
        if (p >= N) p -= N;
        return p;
        };

    auto fly = [&](int which) {
        if (which == 1) {
            if (cnt1 == N) return; 
            int dir = +1;
            int steps = 0;
            while (true) {
                pos1 = step_mod(pos1, dir);
                dist1 += d;
                ++steps;

                bool will_land = (steps > ap1) && (!vis1[pos1]);

                if (pos1 == pos2) {
                    if (will_land) ++meet;     
                    else ++pass;               
                }
                if (will_land) {
                    vis1[pos1] = 1;
                    ++cnt1;
                    break;
                }
            }
        }
        else {
            if (cnt2 == N) return;
            int dir = -1;
            int steps = 0;
            while (true) {
                pos2 = step_mod(pos2, dir);
                dist2 += d;
                ++steps;

                bool will_land = (steps > ap2) && (!vis2[pos2]);

                if (pos2 == pos1) {
                    if (will_land) ++meet;
                    else ++pass;
                }
                if (will_land) {
                    vis2[pos2] = 1;
                    ++cnt2;
                    break;
                }
            }
        }
        };

    int turn = 1;
    while (cnt1 < N || cnt2 < N) {
        if (turn == 1) fly(1);
        else fly(2);
        turn = 3 - turn;
    }

    out dist1 spc dist2 spc meet spc pass;
    ent;
}