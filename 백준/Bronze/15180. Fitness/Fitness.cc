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

    int pos; in pos; pos--;
    map<int, int> m; m.insert({ pos,1 });
    vector<int> move; move.push_back(pos);
    while (true) {
        char d; in d;
        if (d == '#') break;

        int n; in n;
        n %= 8;

        if (d == 'C') {
            pos += n;
            pos %= 8;
        }
        else {
            pos -= n;
            if (pos < 0) pos += 8;
        }

        if (m.count(pos) > 0) m[pos]++;
        else m.insert({ pos,1 });

        move.push_back(pos);
    }
    
    for (int iter : move) out iter + 1 << " ";

    bool ch = m.size() >= 5;
    for (const auto iter : m)
        if (iter.second >= 2) ch = false;

    if (!ch) out "reject";
}