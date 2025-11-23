#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define out cout <<
#define in cin >>
#define endl << "\n"

using namespace std;

int main() {
    Sync;

    long long C;
    in C;

    while (C >= 10) {
        long long s = 0;
        while (C > 0) {
            s += C % 10;
            C /= 10;
        }
        C = s;
    }

    out C endl;
    return 0;
}
