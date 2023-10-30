#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

#include <vector>
#include <stack>
#include <queue>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define Roop(x) while(x--) 

using namespace std;

int main() {
	Sync;

    map <char, int> m; m['-'] = 0; m['\\'] = 1; m['('] = 2; m['@'] = 3; 
    m['?'] = 4; m['>'] = 5; m['&'] = 6; m['%'] = 7; m['/'] = -1;

    auto func = [&](string st) -> void {
        int n = 0, indice = st.size() - 1;
        for (int i = 0; i < st.size(); i++, indice--) n += pow(8, indice) * m[st[i]];
        out n endl;
        };
    while (true) {
        string st; in st;
        if (st[0] == '#' && st.size() == 1) break;
        func(st);
    }
}