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

    ll N, K, B; in N >> K >> B;
    vector<ll> a(N), ps(2 * N + 1);
    Fori(N) in a[i];
    Fori(2 * N) ps[i + 1] = ps[i] + a[i % N];

    ll full = K / N, rem = K % N, ans = full * ps[N], st = (B - 1) % N;
    ans += ps[st + rem] - ps[st];

    out ans endl;

    return 0;
}