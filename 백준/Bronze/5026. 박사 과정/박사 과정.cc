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

    Testcase{
    string st; in st;
    if (!st.compare("P=NP")) out "skipped";
    else {
        int n1(0), n2(0), idx(0);
        string temp = "";
        while (st[idx] != '+') temp.push_back(st[idx++]);
        n1 = stoi(temp);

        temp = ""; idx++;
        while (idx < st.size()) temp.push_back(st[idx++]);
        n2 = stoi(temp);

        out n1 + n2;
    }
    ent;
    }
}