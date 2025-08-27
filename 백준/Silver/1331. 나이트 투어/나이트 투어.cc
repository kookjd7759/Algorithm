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

bool board[6][6];
void init() { Fori(6) Forj(6) board[i][j] = false; }
bool isLegal(const string& a, const string& b) {
    int dx = abs(a[0] - b[0]);
    int dy = abs(a[1] - b[1]);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

int main() {
    Sync;

    init();
    bool isValid = true;
    string start, end, prev;
    Fori(36) {
        string pos; in pos;
        board[pos[0] - 'A'][pos[1] - '1'] = true;
        if (i == 0) start = pos;
        if (i == 35) end = pos;
        if (i != 0 && !isLegal(prev, pos)) isValid = false;
        prev = pos;
    }

    Fori(6) Forj(6) if (!board[i][j]) {
        isValid = false;
        break;
    }

    isValid &= isLegal(start, end);

    out(isValid ? "Valid" : "Invalid");
}