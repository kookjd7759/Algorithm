#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int m[7], fm[7];

int arr[9];

int main() {
	Sync;

    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        if (a == 0) fm[b]++;
        else m[b]++;
    }
    int ret = 0;
    for (int i = 1; i <= 6; i++) {
        if (m[i] % k == 0) ret += m[i] / k;
        else ret += m[i] / k + 1;
    }
    for (int i = 1; i <= 6; i++) {
        if (fm[i] % k == 0) ret += fm[i] / k;
        else ret += fm[i] / k + 1;
    }
    cout << ret;
}