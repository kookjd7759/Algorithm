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

    string line;
    while (getline(cin, line)) {
        if (line == "#") break;
        stringstream ss(line);
        int cur; ss >> cur;
        vector<int> vis(21);
        bool ok = true;
        vis[cur] = 1;
        string cmd;
        while (ss >> cmd) {
            char c = cmd[0];
            int x = cmd[1] - '0';
            if (c == 'U') cur += x;
            else cur -= x;
            if (cur < 1 || cur > 20 || vis[cur]) ok = false;
            else vis[cur] = 1;
        }
        if (!ok) {
            out "illegal" endl;
            continue;
        }
        bool first = true;
        For1i(20) if (!vis[i]) {
            if (!first) out " ";
            out i;
            first = false;
        }
        if (first) out "none";
        out "" endl;
    }

    return 0;
}