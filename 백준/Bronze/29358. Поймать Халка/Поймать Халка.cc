#include <iostream>

using namespace std;

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main() {
    Sync;

    int n; cin >> n;

    int a[3], b[3], c[3];
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) cin >> c[i];

    int cuts = 0;
    for (int i = 0; i < n; ++i) {
        if (b[i] > 0) cuts++;
        if (c[i] < a[i]) cuts++;
    }

    cout << cuts;
    return 0;
}
