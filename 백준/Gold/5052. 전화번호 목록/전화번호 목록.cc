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

class Trie {
private:
    bool isEnd;
    Trie* child[10]; // 0 ~ 9 Digit

public:
    Trie() : isEnd(false) { memset(child, NULL, sizeof(child)); }
    ~Trie() { Fori(10) if (child[i]) delete child[i]; }

    void insert(const char* key) {
        if (*key == '\0') isEnd = true;
        else {
            int c = *key - '0';
            if (child[c] == NULL) child[c] = new Trie();
            child[c]->insert(key + 1);
        }
    }

    bool find(char* key) {
        if (*key == '\0') return false;
        if (isEnd == true) return true;

        int c = *key - '0';
        return child[c]->find(key + 1);
    }
};

int main() {
    Sync;

    int t; cin >> t;
    while (t--) {
        Trie trie;
        int n; cin >> n;
        char** input = new char *[n];
        Fori(n) input[i] = new char[11];
        Fori(n) {
            cin >> input[i];
            trie.insert(input[i]);
        }
        Fori(n) {
            if (trie.find(input[i])) {
                cout << "NO\n";
                break;
            }
            else if (i == n - 1) {
                cout << "YES\n";
            }
        }
    }
}