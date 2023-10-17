#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int max_n(0), max_m(0);
    while (n--) {
        int temp; cin >> temp;
        max_n = max(max_n, temp);
    }
    
    while (m--) {
        int temp; cin >> temp;
        max_m = max(max_m, temp);
    }

    cout << max_n + max_m;
}