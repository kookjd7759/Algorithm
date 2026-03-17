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

    int N, M; in N;
    unordered_set<string> st;
    string s;
    Fori(N) in s, st.insert(s);
    in M;
    bool locked = true;
    Fori(M) {
        in s;
        if (!st.count(s)) out "Unknown " << s << "\n";
        else if (locked) locked = false, out "Opened by " << s << "\n";
        else locked = true, out "Closed by " << s << "\n";
    }

    return 0;
}