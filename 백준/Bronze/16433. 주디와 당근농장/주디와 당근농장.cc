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

    int n, r, c; in n >> r >> c;
    string fir_sec[2]; fir_sec[0] = ""; fir_sec[1] = "";
    Fori(n) {
        fir_sec[0] += "v."[i % 2];
        fir_sec[1] += "v."[(i + 1) % 2];
    }
    bool isFirst;
    if (r % 2) isFirst = (c % 2 ? true : false);
    else isFirst = (c % 2 ? false : true);
    
    int idx = isFirst ? 0 : 1;
    Fori(n) {
        out fir_sec[(i + idx) % 2] endl;
    }
}
