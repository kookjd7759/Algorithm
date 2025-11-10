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

    int N, M;
    while (true) {
        in N >> M;
        if (N == 0 && M == 0) break;
        vector<int> a(N), b(M);
        Fori(N) in a[i];
        Fori(M) in b[i];
        int i = 0, j = 0, cnt = 0;
        while (i < N && j < M) {
            if (a[i] == b[j]) { ++cnt; ++i; ++j; }
            else if (a[i] < b[j]) ++i;
            else ++j;
        }
        out cnt << "\n";
    }
}
