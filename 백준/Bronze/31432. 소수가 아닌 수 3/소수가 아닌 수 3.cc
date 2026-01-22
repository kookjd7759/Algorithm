#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N;
    cin >> N;

    vector<int> d(N);
    for (int i = 0; i < N; ++i) cin >> d[i];

    for (int x : d) {
        if (x == 0 || x == 1 || x == 4 || x == 6 || x == 8 || x == 9) {
            cout << "YES\n";
            cout << x << '\n';
            return 0;
        }
    }

    cout << "YES\n";
    cout << d[0] << d[0] << '\n';
    return 0;
}
