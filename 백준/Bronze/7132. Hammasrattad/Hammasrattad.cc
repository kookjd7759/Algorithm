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

    int M, N; in M >> N;
    unordered_set<ll> st; st.reserve(1LL * (N - M + 1) * (N - M + 1) * 2 + 10);
    for (int a = M; a <= N; ++a) for (int b = M; b <= N; ++b) { int g = gcd(a, b); int p = a / g, q = b / g; st.insert(((ll)p << 32) | (unsigned)q); }
    out (ll)st.size() endl;

    return 0;
}
