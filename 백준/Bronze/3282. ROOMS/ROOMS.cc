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

    int n, g; in n >> g;
    int rooms[100]; memset(rooms, 0, sizeof rooms);
    int* group = new int[g];
    int idx(0), sum(0);
    Fori(g) in group[i], sum += group[i];

    Fori(g) {
        int two = group[i] / 2;
        int one = group[i] % 2;
        while (idx < n) {
            if (two > 0) rooms[idx] = 2, two--, sum -= 2;
            else if (one > 0) rooms[idx] = 1, one--, sum -= 1;
            else break;
            idx++;
        }
    }
    idx = 0;
    while (sum > 0) {
        if (rooms[idx] != 2) {
            if (sum >= 2) {
                sum -= (2 - rooms[idx]);
                rooms[idx] = 2;
            }
            else if (sum == 1) {
                sum -= 1;
                rooms[idx]++;
            }
        }
        idx++;
    }

    Fori(n) out rooms[i] endl;
}