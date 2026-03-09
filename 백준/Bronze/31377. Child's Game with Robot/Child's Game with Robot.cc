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

string Ask(const string& s){
    out s << "\n";
    cout.flush();
    string r;
    getline(cin, r);
    if(r.empty()) getline(cin, r);
    return r;
}

int main() {
    Sync;

    vector<string> path = {
        "move north", "move west", "move south", "move south",
        "move east", "move east", "move north", "move north"
    };
    vector<pair<int,int>> pos = {
        {1,2}, {1,1}, {2,1}, {3,1}, {3,2}, {3,3}, {2,3}, {1,3}
    };

    int x = 2, y = 2, step = 0;

    Fori(8){
        string r = Ask(path[i]);
        step++;
        x = pos[i].first, y = pos[i].second;
        if(r == "found"){
            int waitCnt = 8 - step;
            Forj(waitCnt) Ask("echo wait");
            if(x == 1 && y == 2){ Ask("move south"); Ask("move north"); }
            else if(x == 1 && y == 1){ Ask("move south"); Ask("move north"); }
            else if(x == 2 && y == 1){ Ask("move north"); Ask("move south"); }
            else if(x == 3 && y == 1){ Ask("move north"); Ask("move south"); }
            else if(x == 3 && y == 2){ Ask("move north"); Ask("move south"); }
            else if(x == 3 && y == 3){ Ask("move north"); Ask("move south"); }
            else if(x == 2 && y == 3){ Ask("move north"); Ask("move south"); }
            else if(x == 1 && y == 3){ Ask("move south"); Ask("move north"); }
            return 0;
        }
    }

    Ask("move south");
    Ask("move west");

    return 0;
}