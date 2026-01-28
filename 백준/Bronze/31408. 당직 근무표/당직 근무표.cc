#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N; cin >> N;

    static int cnt[100001];
    int mx = 0;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        int c = ++cnt[x];
        if (c > mx) mx = c;
    }

    cout << (mx <= (N + 1) / 2 ? "YES" : "NO");
    return 0;
}
