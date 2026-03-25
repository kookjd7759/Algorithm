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

    int T; in T;
    vector<int> q(T), primes, superp;
    int mx = 0;
    Fori(T) in q[i], mx = max(mx, q[i]);

    int LIM = 400000;
    vector<bool> isp(LIM + 1, true);
    isp[0] = isp[1] = false;
    for (int i = 2; 1LL * i * i <= LIM; ++i) if (isp[i]) for (int j = i * i; j <= LIM; j += i) isp[j] = false;
    For1i(LIM) if (isp[i]) primes.push_back(i);

    For1i((int)primes.size()) if (isp[i]) superp.push_back(primes[i - 1]);

    Fori(T) out superp[q[i] - 1] endl;

    return 0;
}