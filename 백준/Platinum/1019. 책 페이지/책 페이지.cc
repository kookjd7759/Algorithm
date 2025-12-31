#include <iostream>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

    int N, ans[10], add(0); memset(ans, 0, sizeof(ans));
    cin >> N;

    for (int i = 1; N != 0; i *= 10) {
        int curr = N % 10;
        N /= 10;

        ans[0] -= i;
        for (int j = 0; j < curr; j++) ans[j] += (N + 1) * i;
        ans[curr] += N * i + 1 + add;
        for (int j = curr + 1; j < 10; j++) ans[j] += N * i;

        add += curr * i;
    }

    for (int i = 0; i < 10; i++) cout << ans[i] << ' ';

	return 0;
}
