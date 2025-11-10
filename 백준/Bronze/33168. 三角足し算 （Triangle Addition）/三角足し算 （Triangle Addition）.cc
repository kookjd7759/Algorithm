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

    int N; in N;
    vector<long long> a(N);
    Fori(N) in a[i];

    for (int step = 1; step <= N - 1; ++step) {
        int k = a.size();
        vector<long long> b(k - 1);
        for (int i = 0; i < k - 1; ++i) b[i] = a[i] + a[i + 1];
        for (int i = 0; i < (int)b.size(); ++i) {
            if (i) cout << ' ';
            out b[i];
        }
        ent;
        a.swap(b);
    }
    return 0;
}
