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

bool Win(vector<char> &b, char c) {
    int line[8][3] = {{1,2,3},{4,5,6},{7,8,9},{1,4,7},{2,5,8},{3,6,9},{1,5,9},{3,5,7}};
    Fori(8) if (b[line[i][0]] == c && b[line[i][1]] == c && b[line[i][2]] == c) return true;
    return false;
}

int main() {
    Sync;

    string line;
    while (getline(cin, line)) {
        if (line == "#") break;
        stringstream ss(line);
        char cur; ss >> cur;
        vector<char> b(10, '.');
        int x;
        char ans = 'D';
        while (ss >> x) {
            b[x] = cur;
            if (Win(b, cur)) {
                ans = cur;
                break;
            }
            cur = (cur == 'X' ? 'O' : 'X');
        }
        if (ans == 'D') out "Draw" endl;
        else out ans endl;
    }

    return 0;
}