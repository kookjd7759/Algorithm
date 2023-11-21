#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define Interactive cin.tie(0)->sync_with_stdio(0);
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

    int num[10]; memset(num, 0, sizeof(num));
    string st; in st;
    Fori(st.size()) num[st[i] - '0']++;

    bool ch = true;
    Fori(10) {
        if (i == 0 || i == 1 || i == 2 || i == 8) continue;

        if (num[i]) {
            ch = false;
            break;
        }
    }

    int sum = num[0];
    if (!ch) out 0;
    else if (!num[0] || !num[1] || !num[2] || !num[8]) out 1;
    else if (num[1] != sum || num[2] != sum || num[8] != sum) out 2;
    else out 8;
}