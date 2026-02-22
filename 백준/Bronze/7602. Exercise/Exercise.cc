#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int machineNo = 1;

    while (cin >> n) {
        if (n == 0) break;

        vector<long long> rate(n + 1);
        for (int i = 1; i <= n; i++) cin >> rate[i];

        cout << "Machine " << machineNo++ << "\n";

        while (true) {
            string name;
            int e;
            cin >> name >> e;

            if (name == "#" && e == 0) break;

            long long total = 0;
            for (int i = 0; i < e; i++) {
                int level, d;
                cin >> level >> d;
                total += rate[level] * 1LL * d;
            }

            cout << name << " " << total << "\n";
        }
    }

    return 0;
}