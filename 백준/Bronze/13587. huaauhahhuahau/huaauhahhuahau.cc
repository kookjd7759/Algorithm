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
    
    string st; in st;
    string new_st1 = "";
    Fori(st.length()) {
        if (st[i] == 'a' || st[i] == 'i'
            || st[i] == 'u' || st[i] == 'e' || st[i] == 'o')
            new_st1 += st[i];
    }
    string new_st2 = new_st1;
    reverse(new_st1.begin(), new_st1.end());

    bool ch = true;
    Fori(new_st1.size()) if (new_st1[i] != new_st2[i]) {
        ch = false;
        break;
    }
    if (ch) out 'S';
    else out 'N';
}