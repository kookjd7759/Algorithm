#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    vector<int> ans(80001, 0);
    int n3(0), n7(0);
    for (int i = 1; i < 80001; ++i) {
        ans[i] = ans[i - 1];
        n3++, n7++;
        if (n3 == 3 || n7 == 7) {
            ans[i] += i;
            if (n3 == 3) n3 = 0;
            if (n7 == 7) n7 = 0;
        }
    }

    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        cout << ans[n] << "\n";
    }

    return 0;
}
