#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout << 
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;
    
    string st; in st;
    int n(stoi(st)), ret(0);
    Fori(st.size()) {
        int w(pow(10, st.size() - i - 1));
        if (ret + w * 7 <= n) ret += w * 7;
        else if (ret + w * 4 <= n) ret += w * 4;
        else {
            while (i > 0) {
                --i;
                w = pow(10, st.size() - i - 1);
                int prev = ret / w % 10;
                if (prev == 7) {
                    ret -= w * 3;
                    break;
                }
                else if (prev == 4) {
                    ret -= w * 4;
                }
                else break;
            }
        }
    }
    out ret;
}