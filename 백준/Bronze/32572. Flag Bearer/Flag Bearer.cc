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

    int N, C; in N >> C;

    vector<pair<int,int>> mp(26);
    mp[0] = {0,1};
    mp[1] = {0,2};
    mp[2] = {0,3};
    mp[3] = {0,4};
    mp[4] = {0,5};
    mp[5] = {0,6};
    mp[6] = {0,7};
    mp[7] = {1,2};
    mp[8] = {1,3};
    mp[9] = {4,6};
    mp[10] = {1,4};
    mp[11] = {1,5};
    mp[12] = {1,6};
    mp[13] = {1,7};
    mp[14] = {2,3};
    mp[15] = {2,4};
    mp[16] = {2,5};
    mp[17] = {2,6};
    mp[18] = {2,7};
    mp[19] = {3,4};
    mp[20] = {3,5};
    mp[21] = {4,7};
    mp[22] = {5,6};
    mp[23] = {5,7};
    mp[24] = {3,6};
    mp[25] = {6,7};

    map<pair<int,int>, int> rev;
    Fori(26) rev[mp[i]] = i;

    int dx[8] = {1,1,0,-1,-1,-1,0,1};
    int dy[8] = {0,-1,-1,-1,0,1,1,1};

    vector<int> letters;
    Fori(N){
        vector<string> g(9); Forj(9) in g[j];
        vector<int> dirs;
        Forj(8){
            bool ok = false;
            For1k(3) if(g[4 + dx[j] * k][4 + dy[j] * k] == '#') ok = true;
            if(ok) dirs.push_back(j);
        }
        sort(dirs.begin(), dirs.end());
        letters.push_back(rev[{dirs[0], dirs[1]}]);
    }

    Fori(N){
        int x = (letters[i] + C) % 26;
        vector<string> g(9, string(9, '.'));
        g[4][4] = '*';
        int a = mp[x].first, b = mp[x].second;
        For1j(3) g[4 + dx[a] * j][4 + dy[a] * j] = '#';
        For1j(3) g[4 + dx[b] * j][4 + dy[b] * j] = '#';
        g[4][4] = '*';
        Forj(9) out g[j] endl;
    }

    return 0;
}