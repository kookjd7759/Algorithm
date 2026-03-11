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

    int N, X; in N >> X;
    vector<int> a(N), b(N);
    Fori(N) in a[i] >> b[i];

    for(int i = 0; i < N - 1; ++i) {
        if(a[i] == a[i + 1]) continue;
        if(a[i] > a[i + 1]) {
            if(b[i] == 1 && b[i + 1] == 0) swap(a[i], a[i + 1]);
        } else {
            if(b[i + 1] == 1 && b[i] == 0) swap(a[i], a[i + 1]);
        }
    }

    int ans = 0;
    Fori(N) {
        if(b[i] == 1 && a[i] <= X) ++ans;
        if(b[i] == 0 && a[i] > X) ++ans;
    }

    out ans endl;

    return 0;
}