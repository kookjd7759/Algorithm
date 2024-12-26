#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

struct Trie {
    bool isEnd;
    map<string, Trie*> child;

    Trie() : isEnd(false) {}
    ~Trie() {
        map<string, Trie*>::iterator iter;
        for (iter = child.begin(); iter != child.end(); ++iter) 
            delete iter->second;
    }

    void insert(const vector<string>& vec, int idx) {
        if (vec.size() == idx) isEnd = true;
        else {
            string st = vec[idx];
            if (child.count(st) == 0) child.insert(make_pair(st, new Trie()));
            child[st]->insert(vec, idx + 1);
        }
    }
};

void dfs(const Trie* trie, int depth = 0) {
    for (pair<string, Trie*> next : trie->child) {
        Fori(depth) cout << "--";
        cout << next.first << "\n";
        dfs(next.second, depth + 1);
    }
}

int main() {
    Sync;

    Trie* trie = new Trie;
    int n; cin >> n;
    Fori(n) {
        int m; cin >> m;
        vector<string> vec(m);
        Forj(m) cin >> vec[j];
        trie->insert(vec, 0);
    }

    dfs(trie);
}