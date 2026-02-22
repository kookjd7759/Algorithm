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
    int M, N; in M >> N;
    int top = 0, bottom = M - 1, left = 0, right = N - 1, dir = 0, seg = 0;
    while (top <= bottom && left <= right) {
        if (dir == 0) seg++, top++, dir = 1;
        else if (dir == 1) seg++, right--, dir = 2;
        else if (dir == 2) seg++, bottom--, dir = 3;
        else seg++, left++, dir = 0;
    }
    out max(0, seg - 1) endl;
    return 0;
}