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

    const int LIM = 1000000;
    vector<bool> is_comp(LIM + 1);
    vector<int> primes;
    for (int i = 2; i <= LIM; ++i) {
        if (!is_comp[i]) {
            primes.push_back(i);
            if (1LL * i * i <= LIM) for (long long j = 1LL * i * i; j <= LIM; j += i) is_comp[(int)j] = true;
        }
    }

    int N; in N;
    Fori(N){
        unsigned long long S; in S;
        bool ok = true;
        for (int p : primes) { if (S % p == 0) { ok = false; break; } }
        out (ok ? "YES\n" : "NO\n");
    }
}
