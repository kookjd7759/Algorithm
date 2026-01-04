#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

static bool lucky(int h, int m) {
    int h1 = h / 10, h2 = h % 10, m1 = m / 10, m2 = m % 10;

    if (h2 == 2 && m1 == 3 && m2 == 9) return true;
    if (h1 == 2 && (h2 == 0 || h2 == 2 || h2 == 3) && m1 == 3 && m2 == 9) return true;
    if (h1 == 2 && h2 == 3 && (m1 == 0 || m1 == 3 || m1 == 9) && m2 == 9) return true;
    if (h1 == 2 && h2 == 3 && m1 == 9) return true;

    return false;
}

int main() {
	Sync;
	
    int H, M; cin >> H >> M;
    int ans = 0;

    for (int h = 0; h < H; ++h) for (int m = 0; m < M; ++m)
        if (lucky(h, m)) ans++;

    cout << ans;
	return 0;
}
