#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int score = 0;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        // "ha"
        if (i + 1 < n && s.substr(i, 2) == "ha") {
            score += 1;
        }

        // "boooo"
        if (i + 4 < n && s.substr(i, 5) == "boooo") {
            score -= 1;
        }

        // "bravo"
        if (i + 4 < n && s.substr(i, 5) == "bravo") {
            score += 3;
        }
    }

    cout << score << "\n";
    return 0;
}