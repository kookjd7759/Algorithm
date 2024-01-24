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
    
    Testcase{
    vector<int> vec(4);
    Fori(4) in vec[i];
    int ret[3]; memset(ret, 0, sizeof ret);
    sort(vec.begin(), vec.end(), greater<>());
    Fori(2) 
        for (int j = i + 1; j < 3; j++)
            for (int k = j + 1; k < 4; k++) {
                if (vec[i] >= vec[j] + vec[k]) continue;

                if ((vec[k] * vec[k] + vec[j] * vec[j]) == vec[i] * vec[i])
                    ret[0]++;
                else if ((vec[k] * vec[k] + vec[j] * vec[j]) > vec[i] * vec[i])
                    ret[1]++;
                else ret[2]++;
            }
    out ret[0] spc ret[1] spc ret[2] endl;
    };

}