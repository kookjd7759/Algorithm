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

    int n; in n;
    int ENG[26], eng[26], space(0);
    memset(ENG, 0, sizeof(ENG));
    memset(eng, 0, sizeof(eng));
    Fori(n) {
        int a; in a;
        if (a == 0) space++;
        else if (a <= 26) ENG[a - 1]++;
        else eng[a - 27]++;
    }
    string line; getline(cin, line); getline(cin, line);
    Fori(line.size()) {
        if (line[i] == ' ') space--;
        else if (isupper(line[i])) ENG[line[i] - 'A']--;
        else eng[line[i] - 'a']--;
    }

    bool isYes(space == 0);
    Fori(26) if (ENG[i] != 0 || eng[i] != 0) isYes = false;
    out(isYes ? 'y' : 'n');
}
