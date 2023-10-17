#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k, q, time(0); cin >> k >> q;
    while (q--) {
        int t;
        char ans;
        cin >> t >> ans;
        time += t;
        if (time >= 210) break;
        if (ans == 'T') {
            k++;
            if (k == 9) k = 1;
        }
    }
    cout << k;
}