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

    int N; in N;
    vector<int> seat(N + 1), moved(N + 1);
    For1i(N) seat[i] = i;
    seat[1] = 0;

    int cow = 1, pos = 1;
    while (1) {
        moved[cow] = 1;
        int to = (pos - 1 + cow) % N + 1;
        if (!seat[to]) {
            out cow endl;
            return 0;
        }
        int next = seat[to];
        seat[to] = cow;
        if (moved[next]) {
            out cow endl;
            return 0;
        }
        cow = next;
        pos = to;
    }

    return 0;
}