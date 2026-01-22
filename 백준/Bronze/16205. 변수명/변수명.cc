#include <iostream>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int type;
    string s;
    cin >> type >> s;

    vector<string> words;

    if (type == 1 || type == 3) {
        string cur;
        for (char c : s) {
            if (isupper(c)) {
                if (!cur.empty()) words.push_back(cur);
                cur.clear();
                cur.push_back(tolower(c));
            } else {
                cur.push_back(c);
            }
        }
        if (!cur.empty()) words.push_back(cur);
    } else {
        string cur;
        for (char c : s) {
            if (c == '_') {
                words.push_back(cur);
                cur.clear();
            } else {
                cur.push_back(c);
            }
        }
        if (!cur.empty()) words.push_back(cur);
    }

    string camel = words[0];
    for (int i = 1; i < (int)words.size(); ++i) {
        camel.push_back(toupper(words[i][0]));
        camel += words[i].substr(1);
    }

    string snake = words[0];
    for (int i = 1; i < (int)words.size(); ++i) {
        snake.push_back('_');
        snake += words[i];
    }

    string pascal;
    for (auto &w : words) {
        pascal.push_back(toupper(w[0]));
        pascal += w.substr(1);
    }

    cout << camel << '\n';
    cout << snake << '\n';
    cout << pascal << '\n';

    return 0;
}
