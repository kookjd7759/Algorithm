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
    vector<ll> A(N);
    Fori(N) in A[i];
    sort(A.begin(), A.end());
    int l = 0, r = N - 1;
    ll as = 0, bs = 0;
    for (int p = 1; p <= N; ++p) {
        bool alice = ((N - p + 1) % 2 == 0);
        if (alice) {
            as += A[r--];
        }
        else {
            bs += A[l++];
        }
        if (!(as > bs)) { out "Bob\n"; return 0; }
    }
    out "Alice\n";
    return 0;
}
