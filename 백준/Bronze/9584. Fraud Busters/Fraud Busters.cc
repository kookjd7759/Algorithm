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

vector<string> vec;

int main() {
    Sync;

    string num; in num;
    int n, cnt(0); in n;
    while (n--) {
        string temp; in temp;
        bool ch = true;
        Fori(9) if (num[i] != '*' && num[i] != temp[i]) {
            ch = false;
            break;
        }
        if (ch) {
            vec.push_back(temp);
            cnt++;
        }
    }
    out cnt endl;
    Fori(vec.size()) out vec[i] endl;
}