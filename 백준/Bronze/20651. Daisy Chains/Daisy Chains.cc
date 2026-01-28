#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N;
    cin >> N;
    int p[105];
    for (int i = 1; i <= N; i++) cin >> p[i];

    long long ans = 0;

    for (int i = 1; i <= N; i++) {
        int sum = 0;
        int mn = 1000000000, mx = 0;
        bool exist[1001] = {0};

        for (int j = i; j <= N; j++) {
            sum += p[j];
            if (p[j] < mn) mn = p[j];
            if (p[j] > mx) mx = p[j];
            exist[p[j]] = true;

            int len = j - i + 1;
            if (sum % len == 0) {
                int avg = sum / len;
                if (avg >= mn && avg <= mx && avg <= 1000 && exist[avg]) ans++;
            }
        }
    }

    cout << ans;
    return 0;
}