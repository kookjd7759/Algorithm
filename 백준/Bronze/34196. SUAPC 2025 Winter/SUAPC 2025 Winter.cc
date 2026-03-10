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

    pair<string, int> a[6][13] = {
        {},
        {{"Yes",0},{"Yes",0},{"Yes",0},{"Yes",2},{"No",1},{"Yes",0},{"Yes",2},{"Yes",0},{"Yes",0},{"Yes",3},{"Yes",2},{"Yes",1},{"Yes",0}},
        {{"Yes",0},{"Yes",1},{"Yes",0},{"Yes",0},{"No",8},{"Yes",0},{"Yes",4},{"Yes",3},{"Yes",2},{"Yes",0},{"Yes",2},{"Yes",3},{"Yes",3}},
        {{"Yes",0},{"Yes",0},{"Yes",0},{"Yes",1},{"No",1},{"Yes",0},{"No",2},{"Yes",3},{"Yes",0},{"Yes",0},{"Yes",1},{"Yes",1},{"Yes",0}},
        {{"Yes",0},{"Yes",0},{"Yes",0},{"Yes",3},{"No",0},{"Yes",0},{"No",0},{"Yes",0},{"Yes",1},{"Yes",0},{"Yes",1},{"Yes",1},{"Yes",0}},
        {{"Yes",0},{"Yes",1},{"Yes",1},{"Yes",0},{"No",0},{"Yes",0},{"No",0},{"Yes",6},{"Yes",4},{"Yes",0},{"Yes",1},{"Yes",0},{"Yes",1}}
    };

    int Q; in Q;
    while (Q--) {
        int R; char C; in R >> C;
        int idx = C - 'A';
        out a[R][idx].first spc a[R][idx].second endl;
    }

    return 0;
}