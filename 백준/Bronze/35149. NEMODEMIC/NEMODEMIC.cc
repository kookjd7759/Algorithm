#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int w(0), v(0), a(0), m(0), s(0), e(0);
    int N, M; cin >> N >> M;
    for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j) {
        char c; cin >> c;
        if (c == '#') w++;
        if (c == 'U' || c == 'D' || c == 'L' || c == 'R') v++;
        if (c == 'A') a++;
        if (c == 'V') m++;
        if (c == 'S') s++;
        if (c == 'E') e++;
    }

    if (s != 1 || e != 1) {
        cout << -1;
        return 0;
    }

    if (w <= 1 && v <= 1 && a == 0 && m == 0) cout << 1;
    else if (a == 0 && m == 0) cout << 2;
    else if (a == 0) cout << 3;
    else cout << 4;

    return 0;
}
