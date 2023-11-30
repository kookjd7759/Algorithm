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

    while (true) {
        string st; instr(st);
        if (st == "#") break;
        
        int s = -(st.back() - 'A');
        st.pop_back();
        Fori(st.size()) {
            if ('A' <= st[i] && st[i] <= 'Z') {
                char c = st[i] + s;
                if (c < 'A') c += 26;
                else if (c > 'Z') c -= 26;
                out c;
            }
            else if ('a' <= st[i] && st[i] <= 'z') {
                char c = st[i] + s;
                if (c < 'a') c += 26;
                else if (c > 'z') c -= 26;
                out c;
            }
            else out st[i];
        }
        ent;
    }
}