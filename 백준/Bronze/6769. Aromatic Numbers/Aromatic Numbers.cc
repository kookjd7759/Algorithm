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

    string st; in st;
    int ret(0);
    vector<pair<int, int>> vec;
    for (int i = 0; i < st.size(); i += 2) {
        int a = st[i] - '0', b;
        if (st[i + 1] == 'M') b = 1000;
        else if (st[i + 1] == 'D') b = 500;
        else if (st[i + 1] == 'C') b = 100;
        else if (st[i + 1] == 'L') b = 50;
        else if (st[i + 1] == 'X') b = 10;
        else if (st[i + 1] == 'V') b = 5;
        else b = 1;

        vec.push_back({ b, a });
    }
    reverse(vec.begin(), vec.end());
    int prev = vec[0].first;
    ret += prev * vec[0].second;
    For1i(st.size() / 2 - 1) {
        if (prev > vec[i].first)
            ret -= vec[i].first * vec[i].second;
        else
            ret += vec[i].first * vec[i].second;
        prev = vec[i].first;
    }
    out ret endl;
}