#include <iostream>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    string s;
    cin >> s;

    long long p = 0;
    long long q = 1;

    size_t dot = s.find('.');
    if (dot == string::npos) {
        for (char c : s) p = p * 10 + (c - '0');
        q = 1;
    } else {
        string frac = s.substr(dot + 1);
        for (char c : frac) {
            p = p * 10 + (c - '0');
            q *= 10;
        }
    }

    cout << "YES\n";
    cout << p << ' ' << q << '\n';
    return 0;
}
