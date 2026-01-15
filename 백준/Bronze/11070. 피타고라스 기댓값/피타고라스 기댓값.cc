#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

using ll = long long;
using i128 = __int128_t;

int main() {
    Sync;

    int tc; 
    cin >> tc;

    while (tc--) {
        int n, m; 
        cin >> n >> m;

        vector<ll> S(n + 1, 0), A(n + 1, 0);

        for (int i = 0; i < m; ++i) {
            int a, b, p, q;
            cin >> a >> b >> p >> q;
            S[a] += p;  A[a] += q;
            S[b] += q;  A[b] += p;
        }

        ll mx = -1;
        ll mn = (ll)1e18;

        for (int i = 1; i <= n; ++i) {
            ll val;
            if (S[i] == 0 && A[i] == 0) {
                val = 0;
            } else {
                i128 s2 = (i128)S[i] * S[i];
                i128 a2 = (i128)A[i] * A[i];
                val = (ll)((s2 * 1000) / (s2 + a2));
            }
            mx = max(mx, val);
            mn = min(mn, val);
        }

        cout << mx << '\n';
        cout << mn << '\n';
    }

    return 0;
}
