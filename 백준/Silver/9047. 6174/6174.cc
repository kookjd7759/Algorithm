#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define out cout <<
#define in cin >>
#define endl << "\n"

using namespace std;

int main() {
    Sync;

    int T;
    in T;
    while (T--) {
        int x;
        in x;

        int cnt = 0;
        while (x != 6174) {
            string s = to_string(x);
            while (s.size() < 4) s = '0' + s;

            string a = s, b = s;
            sort(a.begin(), a.end(), greater<char>());
            sort(b.begin(), b.end());

            int big = stoi(a);
            int small = stoi(b);
            x = big - small;
            cnt++;
        }

        out cnt << "\n";
    }

    return 0;
}
