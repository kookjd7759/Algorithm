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

int getTime() {
    string st; in st;
    return stoi(st.substr(0, 2)) * 60 + stoi(st.substr(3, 2));
}

int main() {
    Sync;

    int n; in n;
    int* students = new int[n];
    int teacher;
    Fori(n) {
        int time(getTime());
        string v; in v;
        if (v[0] == 't') teacher = time, --i;
        else students[i] = time;
    }
    int limit(getTime()), cnt(0);
    Fori(n) if (limit <= students[i] && teacher <= students[i]) ++cnt;
    out cnt;
}