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
    vector<int> h(N + 1), d(N);
    For1i(N) in h[i];

    for (int i = 1; i < N; ++i) {
        if (h[i + 1] > h[i]) d[i - 1] = 1;
        else if (h[i + 1] < h[i]) d[i - 1] = -1;
        else d[i - 1] = 0;
    }
    if (h[1] > h[N]) d[N - 1] = 1;
    else if (h[1] < h[N]) d[N - 1] = -1;
    else d[N - 1] = 0;

    int plain = 0, up = 0, down = 0;
    int cur = d[0];

    if (cur == 0) plain++;
    else if (cur == 1) up++;
    else down++;

    for (int i = 1; i < N; ++i) {
        if (d[i] == d[i - 1]) continue;
        if (d[i] == 0) plain++;
        else if (d[i] == 1) up++;
        else down++;
    }

    out plain spc up spc down << "\n";

    return 0;
}