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

ll Cnt(ll n, ll p) {
    ll ret = 0;
    while (n) n /= p, ret += n;
    return ret;
}

int main() {
    Sync;

    int N, K; in N >> K;
    K = min(K, N - K);

    vector<int> isPrime(N + 1, 1), primes;
    if (N >= 0) isPrime[0] = 0;
    if (N >= 1) isPrime[1] = 0;
    For1i(N) if (isPrime[i]) {
        primes.push_back(i);
        if ((ll)i * i <= N) for (int j = i * i; j <= N; j += i) isPrime[j] = 0;
    }

    const int BASE = 1000000000;
    vector<int> a(1, 1);

    auto Mul = [&](int x) {
        ll carry = 0;
        Fori((int)a.size()) {
            ll cur = 1LL * a[i] * x + carry;
            a[i] = cur % BASE;
            carry = cur / BASE;
        }
        while (carry) a.push_back(carry % BASE), carry /= BASE;
    };

    for (int p : primes) {
        ll e = Cnt(N, p) - Cnt(K, p) - Cnt(N - K, p);
        while (e--) Mul(p);
    }

    string s = to_string(a.back());
    for (int i = (int)a.size() - 2; i >= 0; --i) {
        string t = to_string(a[i]);
        s += string(9 - t.size(), '0') + t;
    }

    int ans = 0;
    for (char c : s) if (c == '0') ++ans;
    out ans endl;

    return 0;
}