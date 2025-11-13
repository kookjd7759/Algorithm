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
    in N;
    const int MAX = 200000;
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX; ++i) {
        if (!isPrime[i]) continue;
        for (int j = i * i; j <= MAX; j += i) isPrime[j] = false;
    }
    vector<int> primes;
    For1i(MAX) if (isPrime[i]) primes.push_back(i);
    Fori((int)primes.size() - 1) {
        ll p = 1LL * primes[i] * primes[i + 1];
        if (p > N) {
            out p endl;
            break;
        }
    }

    return 0;
}
