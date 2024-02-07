#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int gcd(int a, int b) {
    if (a < b) swap(a, b);
    int t;
    while (b) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

bool func(int n) {
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    Sync;

    int x, l, r; in x >> l >> r;
    vector<int> ret;
    for (int i = l; i <= r; i++) {
        if (i != x && func(gcd(i, x))) ret.push_back(i);
    }
    out ret.size() endl;
    Fori(ret.size()) out ret[i] << ((i != ret.size() - 1) ? ' ' : '\n');
}