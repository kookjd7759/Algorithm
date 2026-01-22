#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N;
    long long K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    long long prev = -1;
    int cnt = 0;

    for (int i = 0; i < N; ++i) {
        long long a = A[i];
        long long b = A[i] + K;

        if (a > prev) {
            prev = a;
        } else if (b > prev) {
            prev = b;
            cnt++;
        } else {
            cout << -1;
            return 0;
        }
    }

    cout << cnt;
    return 0;
}
