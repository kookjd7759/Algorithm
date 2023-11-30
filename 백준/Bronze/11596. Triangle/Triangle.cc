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

    int a[3], b[3];
    Fori(3) in a[i];
    Fori(3) in b[i];
    sort(a, a + 3); sort(b, b + 3);

    bool ch = true;
    if (sqrt(a[0] * a[0] + a[1] * a[1]) != a[2]) ch = false;
    if (sqrt(b[0] * b[0] + b[1] * b[1]) != b[2]) ch = false;
    Fori(3) if (a[i] != b[i]) {
        ch = false;
        break;
    }
    out(ch ? "YES" : "NO");
}