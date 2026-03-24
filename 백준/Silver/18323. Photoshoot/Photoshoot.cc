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
    vector<int> b(N), c(N + 1), a(N + 1);
    For1i(N - 1) in b[i];

    c[1] = 0;
    for (int i = 2; i <= N; ++i) c[i] = b[i - 1] - c[i - 1];

    For1i(N) {
        vector<int> used(N + 1, 0);
        bool ok = 1;
        For1j(N) {
            a[j] = (j & 1 ? i + c[j] : c[j] - i);
            if (a[j] < 1 || a[j] > N || used[a[j]]) { ok = 0; break; }
            used[a[j]] = 1;
        }
        if (ok) {
            For1j(N) out a[j] << (j == N ? '\n' : ' ');
            return 0;
        }
    }

    return 0;
}