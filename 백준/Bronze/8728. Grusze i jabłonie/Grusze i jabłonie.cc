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

int main() {
    Sync;

    int n; in n;
    int* tree = new int[n];
    Fori(n) in tree[i];

    int f_p, f_a, l_p, l_a;
    Fori(n) if (tree[i] == 0) {
        f_p = i;
        break;
    }
    Fori(n) if (tree[i] == 1) {
        f_a = i;
        break;
    }
    for (int i = n - 1; i >=0; i--) if (tree[i] == 0) {
        l_p = i;
        break;
    }
    for (int i = n - 1; i >= 0; i--) if (tree[i] == 1) {
        l_a = i;
        break;
    }

    out max(abs(f_p - l_a), abs(f_a - l_p));
}