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
    vector<int> a(N + 1);
    ll sum = 0;
    For1i(N) in a[i], sum += a[i];
    if (sum % 3) {
        out -1 endl;
        return 0;
    }
    ll tar = sum / 3, cur = 0;
    int i1 = -1, i2 = -1;
    For1i(N) {
        cur += a[i];
        if (cur == tar && i < N - 1 && i1 == -1) i1 = i;
        else if (cur == 2 * tar && i < N && i1 != -1) {
            i2 = i;
            break;
        }
    }
    if (i1 == -1 || i2 == -1) out -1 endl;
    else out i1 spc i2 endl;

    return 0;
}