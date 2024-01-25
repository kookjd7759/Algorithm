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
    
    int la[26], ua[26]; memset(la, 0, sizeof la); memset(ua, 0, sizeof ua);
    int n; in n;
    cin.ignore();
    Fori(n) {
        string st; instr(st);
        Forj(st.size()) {
            if (islower(st[j])) la[st[j] - 'a']++;
            else if (st[j] != ' ') ua[st[j] - 'A']++;
        }
    }
    Fori(26) if (la[i]) out(char)('a' + i) spc la[i] endl;
    Fori(26) if (ua[i]) out(char)('A' + i) spc ua[i] endl;
}