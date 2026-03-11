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

    bool first = true;
    for(int n = 1000; n <= 9999; ++n) {
        int sum = 1;
        for(int d = 2; 1LL * d * d <= n; ++d) if(n % d == 0) {
            sum += d;
            if(d * d != n) sum += n / d;
        }
        if(sum == n) {
            if(!first) out " ";
            out n;
            first = false;
        }
    }
    ent;

    first = true;
    for(int n = 100; n <= 999; ++n) {
        int x = n, sum = 0;
        while(x) sum += (x % 10) * (x % 10) * (x % 10), x /= 10;
        if(sum == n) {
            if(!first) out " ";
            out n;
            first = false;
        }
    }
    ent;

    return 0;
}