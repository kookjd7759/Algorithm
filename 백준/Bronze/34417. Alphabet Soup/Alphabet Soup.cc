#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<bool> has(26, false);
    for (char c : s) {
        has[c - 'A'] = true;
    }

    string missing = "";
    for (int i = 0; i < 26; i++) {
        if (!has[i]) missing += char('A' + i);
    }

    if (missing.empty()) {
        cout << "Alphabet Soup!";
    } else {
        cout << missing;
    }

    return 0;
}
