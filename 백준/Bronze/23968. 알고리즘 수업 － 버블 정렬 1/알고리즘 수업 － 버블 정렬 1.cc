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
    int N;
    ll K;
    in N >> K;
    vector<ll> A(N + 1);
    For1i(N) in A[i];

    ll cnt = 0;
    ll x = -1, y = -1;
    bool found = false;

    for (int last = N; last >= 2 && !found; --last) {
        for (int i = 1; i <= last - 1; ++i) {
            if (A[i] > A[i + 1]) {
                swap(A[i], A[i + 1]);
                ++cnt;
                if (cnt == K) {
                    x = A[i];
                    y = A[i + 1];
                    found = true;
                    break;
                }
            }
        }
    }

    if (!found) {
        out -1;
    } else {
        if (x > y) swap(x, y);
        out x spc y;
    }
}
