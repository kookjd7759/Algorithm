#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N;
    string s;
    cin >> N >> s;

    for (int L = 1; L < N; L++) {
        int diff = 0;
        int start = N - L;
        for (int i = 0; i < L; i++) {
            if (s[i] != s[start + i]) {
                if (++diff > 1) break;
            }
        }
        if (diff == 1) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
