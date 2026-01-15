#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;


int main() {
    Sync;
	
    int N, M; cin >> N >> M;
    map<string, string> m;
    for (int i = 0; i < N; ++i) {
        int len; string name; cin >> len >> name;
        char keys[7]; for (int j = 0; j < 7; ++j) cin >> keys[j];
        string key(""); for (int j = 0; j < 3; ++j) key.push_back(keys[j]);
        if (m.count(key)) m[key] = "?";
        else m.insert({ key, name });
    }

    for (int i = 0; i < M; ++i) {
        string key("");
        for (int i = 0; i < 3; ++i) { char c; cin >> c; key.push_back(c); }
        if (m.count(key)) cout << m[key] << "\n";
        else cout << "!\n";
    }

    return 0;
}
