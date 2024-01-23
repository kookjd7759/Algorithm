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

    auto check = [&](string st) -> bool {
        bool ch1 = false, ch2 = false, ch3 = false;
        Fori(st.length()) {
            if (isupper(st[i])) ch1 = true;
            else if (islower(st[i])) ch2 = true;
            else if (!isalpha(st[i])) ch3 = true;
        }
        return ch1 && ch2 && ch3;
        };

    Testcase{
    string st; in st;
    int size = st.length() - 5, mini = 2e9;
    bool ch = false;
    Fori(size) Forj(size - i) {
        if (check(st.substr(i, 6 + j))) {
            ch = true;
            mini = min(mini, 6 + j);
        }
    }
    if (ch) out mini endl;
    else out 0 endl;
    };
}