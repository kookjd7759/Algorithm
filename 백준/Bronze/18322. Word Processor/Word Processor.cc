#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N, K;
    cin >> N >> K;

    string w;
    int cur = 0;
    bool first = true;

    for (int i = 0; i < N; i++) {
        cin >> w;
        int len = (int)w.size();

        if (first) {
            cout << w;
            cur = len;
            first = false;
        } else {
            if (cur + len <= K) {
                cout << ' ' << w;
                cur += len;
            } else {
                cout << '\n' << w;
                cur = len;
            }
        }
    }

    return 0;
}
