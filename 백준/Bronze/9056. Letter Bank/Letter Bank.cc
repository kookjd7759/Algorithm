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

    Testcase{
    string a, b; in a >> b;
    vector<bool> vec_a(a.size(), false);
    vector<bool> vec_b(b.size(), false);

    Fori(a.size())  Forj(b.size())
        if (a[i] == b[j]) vec_b[j] = true, vec_a[i] = true;

    bool ch = true;
    Fori(a.size()) if (!vec_a[i]) {
        ch = false; break;
    }
    Fori(b.size()) if (!vec_b[i]) {
        ch = false; break;
    }
    out(ch ? "YES" : "NO") endl;
    };
}