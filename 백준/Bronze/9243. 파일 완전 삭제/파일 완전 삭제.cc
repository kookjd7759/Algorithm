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

char str[50];

int main() {
    Sync;

    int n; in n;
    string a, b; in a >> b;
    bool ch = true;
    if (n & 1) {
        Fori(a.size()) {
            if (!((a[i] - '0') != (b[i] - '0'))) {
                ch = false;
                break;
            }
        }
    }
    else {
        Fori(a.size()) {
            if (!((a[i] - '0') == (b[i] - '0'))) {
                ch = false;
                break;
            }
        }
    }

    out(ch ? "Deletion succeeded" : "Deletion failed");
}