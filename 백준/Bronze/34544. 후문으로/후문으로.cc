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

static inline long long idx(long long x){ return x>0? x : x+1; }
static inline long long rev(long long k){ return k>0? k : k-1; }

int main() {
    Sync;

    int N; in N;
    long long cur = 1; 
    Fori(N){
        long long A,B; in A >> B;
        cur += idx(B) - idx(A);
    }
    out rev(cur) << "\n";
    return 0;
}
