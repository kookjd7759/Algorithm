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

    auto palin = [&](string st) -> bool {
        Fori(st.size() / 2) if (st[i] != st[st.size() - 1 - i]) 
            return false;
        return true;
        };

    Testcase{
    string st; in st;
    Fori(st.size()) if ('a' <= st[i] && st[i] <= 'z') st[i] -= 32;
    Fori(st.size()) {
        if (st[i] <= 'C') st[i] = '2';
        else if (st[i] <= 'F') st[i] = '3';
        else if (st[i] <= 'I') st[i] = '4';
        else if (st[i] <= 'L') st[i] = '5';
        else if (st[i] <= 'O') st[i] = '6';
        else if (st[i] <= 'S') st[i] = '7';
        else if (st[i] <= 'V') st[i] = '8';
        else if (st[i] <= 'Z') st[i] = '9';
    }
    out(palin(st) ? "YES" : "NO") endl;
    };
}