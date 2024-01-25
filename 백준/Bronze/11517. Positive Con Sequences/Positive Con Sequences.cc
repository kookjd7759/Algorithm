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
    
    vector<int> vec(4);
    int l;
    while (true) {
        Fori(4) in vec[i];
        if (vec[0] == -1 && vec[1] == -1 && vec[2] == -1 && vec[3] == -1) break;
        
        Fori(4) if (vec[i] == -1) l = i;

        int ret = -1;
        For1i(10000) {
            vec[l] = i;
            if ((vec[3] - vec[2] == vec[2] - vec[1]) &&
                (vec[2] - vec[1] == vec[1] - vec[0])) {
                ret = i;
                break;
            }
            else if ((double)vec[3] / (double)vec[2] == (double)vec[2] / (double)vec[1] &&
                (double)vec[2] / (double)vec[1] == (double)vec[1] / (double)vec[0]) {
                ret = i;
                break;
            }
        }
        out ret endl;
    }
}