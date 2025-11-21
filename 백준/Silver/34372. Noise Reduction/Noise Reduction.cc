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

    int N, T;
    in N >> T;
    vector<ll> a(N);
    Fori(N) in a[i];

    vector<ll> pref(N + 1, 0);
    Fori(N) pref[i + 1] = pref[i] + a[i];

    int limit = N / 2 + 1;
    int answer = limit;

    for (int g = 1; g <= limit; ++g) {
        int m = N / g;
        if (m <= 1) {
            answer = g;
            break;
        }
        ll noise = 0;
        ll last_avg = -1;
        for (int j = 0; j < m; ++j) {
            int l = j * g;
            int r = (j + 1) * g;
            ll sum = pref[r] - pref[l];
            ll avg = sum / g;
            if (j > 0) {
                ll diff = avg - last_avg;
                if (diff < 0) diff = -diff;
                if (diff > noise) noise = diff;
            }
            last_avg = avg;
            if (noise > T) break;
        }
        if (noise <= T) {
            answer = g;
            break;
        }
    }

    out answer; ent;

    return 0;
}
