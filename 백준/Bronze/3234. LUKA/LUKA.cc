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

    int x, y; in x >> y;
    auto isRange = [&](int a, int b) -> bool {
        if (abs(x - a) <= 1 && abs(y - b) <= 1) return true;
        return false;
        };

    int sec(0), a(0), b(0);
    vector<int> time;
    if (isRange(a, b)) time.push_back(sec);
    Testcase{
    sec++;
    char c; in c;
    if (c == 'I') a++;
    else if (c == 'Z') a--;
    else if (c == 'S') b++;
    else b--;
    if (isRange(a, b)) time.push_back(sec);
    };
    if (time.empty()) out - 1;
    for (const auto iter : time)
        out iter endl;
}