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

    int N, K; in N >> K;
    vector<long long> A(N);
    Fori(N) in A[i];

    int cnt = 0;
    for (int last = N - 1; last >= 1; --last) {
        int idx = 0;
        for (int i = 1; i <= last; ++i)
            if (A[i] > A[idx]) idx = i;

        if (idx != last) {
            long long x = A[idx], y = A[last];
            ++cnt;
            if (cnt == K) {
                if (x > y) swap(x, y);
                out x spc y << "\n";
                return 0;
            }
            swap(A[idx], A[last]);
        }
    }
    out -1 << "\n";
    return 0;
}
