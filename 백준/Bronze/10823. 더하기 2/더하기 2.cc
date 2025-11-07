#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define out cout <<
#define in cin >> 

using namespace std;

int main() {
    Sync;

    string s, line;
    while (getline(cin, line)) s += line;

    long long sum = 0, cur = 0;
    for (char c : s) {
        if (isdigit(c)) cur = cur * 10 + (c - '0');
        else { sum += cur; cur = 0; }
    }
    sum += cur;
    out sum << "\n";
}
