#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<bool> prison(n + 1, false);
        for (int i = 1; i <= n; i++) for (int j = i; j <= n; j += i)
                prison[j] = !prison[j];

        int ret = 0;
        for (int i = 1; i <= n; i++) ret += prison[i];
        cout << ret << '\n';
    }
}