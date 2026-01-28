#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N, L, H;
    cin >> N >> L >> H;

    int cnt[101] = {0};
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int removeL = L;
    for (int v = 0; v <= 100 && removeL > 0; v++) {
        int take = (cnt[v] < removeL ? cnt[v] : removeL);
        cnt[v] -= take;
        removeL -= take;
    }

    int removeH = H;
    for (int v = 100; v >= 0 && removeH > 0; v--) {
        int take = (cnt[v] < removeH ? cnt[v] : removeH);
        cnt[v] -= take;
        removeH -= take;
    }

    long double sum = 0;
    int left = N - L - H;
    for (int v = 0; v <= 100; v++) sum += (long double)v * cnt[v];

    long double avg = sum / (long double)left;

    cout.setf(ios::fixed);
    cout.precision(15);
    cout << (double)avg;

    return 0;
}
