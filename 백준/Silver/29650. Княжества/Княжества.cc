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

    int n;
    in n;
    int maxNodes = n + 1;
    vector<vector<int>> children(maxNodes);
    vector<int> alive(maxNodes, 0);
    vector<string> name(maxNodes);
    unordered_map<string,int> id;
    id.reserve(maxNodes * 2);

    name[0] = "M";
    alive[0] = 1;
    id["M"] = 0;
    int nodes = 1;

    Fori(n) {
        string op;
        in op;
        if (op == "+") {
            string father, son;
            in father >> son;
            int fid = id[father];
            int sid = nodes++;
            id[son] = sid;
            name[sid] = son;
            alive[sid] = 1;
            children[fid].push_back(sid);
        } else if (op == "-") {
            string nm;
            in nm;
            int v = id[nm];
            alive[v] = 0;
        } else {
            int k;
            in k;
            int cnt = 0;
            vector<int> q;
            q.reserve(nodes);
            int head = 0;
            q.push_back(0);
            string ans = "-";
            while (head < (int)q.size() && cnt < k) {
                int v = q[head++];
                if (alive[v]) {
                    ++cnt;
                    if (cnt == k) {
                        ans = name[v];
                        break;
                    }
                }
                for (int ch : children[v]) q.push_back(ch);
            }
            out ans << "\n";
        }
    }

    return 0;
}
