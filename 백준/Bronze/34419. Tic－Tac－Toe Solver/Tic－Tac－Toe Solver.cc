#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define out cout <<
#define in cin >>
#define endl << "\n"

using namespace std;

char win(char a, char b, char c) {
    if (a == b && b == c && (a == 'X' || a == 'O')) return a;
    return 'N';
}

int main() {
    Sync;

    vector<string> g(3);
    in g[0] >> g[1] >> g[2];

    char r;

    for (int i = 0; i < 3; i++) {
        r = win(g[i][0], g[i][1], g[i][2]);
        if (r != 'N') { out r endl; return 0; }
    }

    for (int j = 0; j < 3; j++) {
        r = win(g[0][j], g[1][j], g[2][j]);
        if (r != 'N') { out r endl; return 0; }
    }

    r = win(g[0][0], g[1][1], g[2][2]);
    if (r != 'N') { out r endl; return 0; }

    r = win(g[0][2], g[1][1], g[2][0]);
    if (r != 'N') { out r endl; return 0; }

    out 'N' endl;
    return 0;
}
