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

char change(char c, int n) { //바꿔줌
    if (n == 0) return c;
    else return (c == 'z' ? change('a', n - 1) : change(c + 1, n - 1));
}

int main() {
    Sync;
    
    auto diff = [&](int a, int b) -> char {
        return (b - a >= 0 ? b - a : 26 - (a - b));
        };

    while (true) { 
    string st[4]; in st[0];
    if (st[0][0] == '#') break;
    in st[1] >> st[2];
    Fori(st[0].size()) 
        st[3].push_back(change(st[2][i], diff(st[0][i], st[1][i])));
    out st[0] spc st[1] spc st[2] spc st[3] endl;
    };
}