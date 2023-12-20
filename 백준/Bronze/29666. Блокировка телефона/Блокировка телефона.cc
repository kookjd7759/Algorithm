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

struct Num {
    int num[3];
};

int main() {
    Sync;

    int n[3];
    Fori(3) {
        char c; in c; 
        n[i] = (c - '0');
    }
    sort(n, n + 3);
    vector<Num> vec;
    vec.push_back({ 1,2,3 });
    vec.push_back({ 4,5,6 });
    vec.push_back({ 7,8,9 });
    vec.push_back({ 1,4,7 });
    vec.push_back({ 3,6,9 });
    vec.push_back({ 2,5,8 });
    vec.push_back({ 0,5,8 });

    bool ch = false;
    Fori(vec.size()) if (n[0] == vec[i].num[0] &&
        n[1] == vec[i].num[1] && n[2] == vec[i].num[2]) {
        ch = true;
        break;
    }
    out(ch > 0 ? "Unlocked" : "Locked");
}