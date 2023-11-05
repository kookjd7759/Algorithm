#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define Roop(x) while(x--) 

using namespace std;

int main() {
    Sync;

    int n, ch[5][3]; memset(ch, 0, sizeof(ch)); in n;
    Roop(n) {
        char a, b; in a >> b;
        ch[a - '1'][b - 'A']++;
    }

    bool c = true;
    Fori(4) Forj(3) if (ch[i][j] < 1) { c = false; break; }
    Fori(3) if (ch[4][i] < 2) { c = false; break; }

    out(c ? "TAK" : "NIE");
}