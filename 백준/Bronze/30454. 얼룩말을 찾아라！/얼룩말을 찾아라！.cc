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

map<int, int> m;

int main() {
    Sync;
    
    int n, l; in n >> l;
    int maxi(0);
    Fori(n) {
        int cnt(0);
        bool ch = false;
        Forj(l) {
            char c; in c;
            if (c == '1') ch = true;
            else {
                if (ch) cnt++;
                ch = false;
            }
        }
        if (ch) cnt++;

        if (m.count(cnt) > 0) m[cnt]++;
        else m.insert({ cnt, 1 });
        
        if (maxi < cnt) maxi = cnt;
    }
    out maxi spc m[maxi];
}