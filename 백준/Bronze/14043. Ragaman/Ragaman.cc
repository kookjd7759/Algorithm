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

    int ori_eng[26]; memset(ori_eng, 0, sizeof ori_eng);
    string a, b; in a >> b;
    Fori(a.size()) ori_eng[a[i] - 'a']++;
    int star(0);
    Fori(b.size()) {
        if (isalpha(b[i])) ori_eng[b[i] - 'a']--;
        else star++;
    }
    int sum(0);
    Fori(26) {
        if (ori_eng[i] < 0) {
            out 'N';
            return 0;
        }
        sum += ori_eng[i];
    }
    
    out(sum == star ? 'A' : 'N');
}