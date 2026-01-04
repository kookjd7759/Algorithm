#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

static bool matchPattern(const string& s, const string& p) {
    if (s.size() != p.size()) return false;
    for (size_t i = 0; i < s.size(); ++i) {
        if (p[i] != '*' && p[i] != s[i]) return false;
    }
    return true;
}

int main() {
    Sync;
    
    int N; cin >> N;

    string* topics = new string[N];
    for (int i = 0; i < N; ++i) cin >> topics[i];

    string pattern; cin >> pattern;

    int* idx = new int[N];
    int V = 0;

    for (int i = 0; i < N; ++i)
        if (matchPattern(topics[i], pattern)) idx[V++] = i;

    cout << V << '\n';
    for (int k = 0; k < V; ++k)
        cout << topics[idx[k]] << '\n';

    delete[] idx;
    delete[] topics;

    return 0;
}
