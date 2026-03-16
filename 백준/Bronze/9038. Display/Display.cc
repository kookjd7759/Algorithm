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

    int T; in T; cin.ignore();
    while (T--) {
        int w; string s; in w; cin.ignore(); getline(cin, s);
        stringstream ss(s);
        string x;
        int lines = 0, cur = 0;
        while (ss >> x) {
            int len = x.size();
            if (!lines) lines = 1, cur = len;
            else if (cur + 1 + len <= w) cur += 1 + len;
            else ++lines, cur = len;
        }
        out lines endl;
    }

    return 0;
}