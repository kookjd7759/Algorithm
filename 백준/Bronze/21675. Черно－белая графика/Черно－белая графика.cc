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

    int n, m; in n >> m;
    bool image1[101][101], image2[101][101];
    memset(image1, false, sizeof image1);
    memset(image2, false, sizeof image2);

    Fori(m) Forj(n) {
        char c; in c;
        if (c == '0') image1[i][j] = false;
        else image1[i][j] = true;
    }
    Fori(m) Forj(n) {
        char c; in c;
        if (c == '0') image2[i][j] = false;
        else image2[i][j] = true;
    }
    bool xorList[4];
    Fori(4) {
        char c; in c;
        if (c == '0') xorList[i] = false;
        else xorList[i] = true;
    }
    Fori(m) {
        Forj(n) {
            if (!image1[i][j] && !image2[i][j]) out xorList[0];
            else if (!image1[i][j] && image2[i][j]) out xorList[1];
            else if (image1[i][j] && !image2[i][j]) out xorList[2];
            else out xorList[3];
        }
        ent;
    }
}