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
    
    auto print = [&](int a, int b, int c) -> void {
        out a << "\n" << b << "\n" << c;
        };

    int a, b; in a >> b;
    if (a == b) {
        if (a == 0) print(0, 0, 0);
        else if (a == 1) print(0, 0, 1);
        else if (a >= 2) out "Undefined";
    }
    else if (abs(a - b) % 2 == 0) {
        if (a == 0) print(0, b / 2, 0);
        else if (b == 0) print(a / 2, 0, 0);
        else if (a == 1) print(0, b / 2, 1);
        else if (b == 1) print(a / 2, 0, 1);
        else out "Undefined";
    }
    else out "Error";
}