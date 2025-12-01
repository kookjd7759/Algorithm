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
    in N >> M;
    vector<int> A(N);
    Fori(N) in A[i];

    ll cnt = 0;
    int best = -1;

    Fori(N) {
        Forj(N) {
            Fork(N) {
                if (!(i < j && j < k)) continue;
                int mn = A[i];
                if (A[j] < mn) mn = A[j];
                if (A[k] < mn) mn = A[k];
                int mx = A[i];
                if (A[j] > mx) mx = A[j];
                if (A[k] > mx) mx = A[k];
                if (mx - mn <= M) {
                    ++cnt;
                    int s = A[i] + A[j] + A[k];
                    if (s > best) best = s;
                }
            }
        }
    }

    if (cnt == 0) {
        out -1;
    } else {
        out cnt spc best;
    }
}
