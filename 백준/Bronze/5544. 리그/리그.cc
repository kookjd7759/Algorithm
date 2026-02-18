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
    vector<int> p(N + 1, 0);
    int M = N * (N - 1) / 2;
    Fori(M) {
        int A, B, C, D; in A >> B >> C >> D;
        if (C > D) p[A] += 3;
        else if (C < D) p[B] += 3;
        else { p[A]++; p[B]++; }
    }
    For1i(N) {
        int r = 1;
        For1j(N) if (p[j] > p[i]) r++;
        out r endl;
    }

    return 0;
}
