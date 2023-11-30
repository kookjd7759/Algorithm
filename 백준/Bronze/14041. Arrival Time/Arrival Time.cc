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

    int h, m; string st; in st;
    h = stoi(st.substr(0, 2)), m = stoi(st.substr(3, 2));
    int time = h * 60 + m;

    Fori(120) {
        if ((time >= 420 && time < 600) || (time >= 900 && time < 1140))
            time++;
        time++;

        time %= 1440;
    }
    h = time / 60;
    m = time % 60;
    if (h < 10) out 0;
    out h << ":";
    if (m < 10) out 0;
    out m;
}