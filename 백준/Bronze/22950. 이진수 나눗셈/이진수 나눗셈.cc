#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N; string M;
    int K; cin >> N >> M >> K;

    if (K == 0) {
        cout << "YES";
        return 0;
    }

    int lastOne = -1;
    for (int i = N - 1; i >= 0; i--) {
        if (M[i] == '1') {
            lastOne = i;
            break;
        }
    }

    if (lastOne == -1) {
        cout << "YES";
        return 0;
    }

    long long tz = (long long)(N - 1 - lastOne);
    cout << (tz >= K ? "YES" : "NO");

    return 0;
}
