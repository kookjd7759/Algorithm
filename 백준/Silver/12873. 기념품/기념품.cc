#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

using ll = long long int;

int main() {
    Sync;

    int N; cin >> N; 
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) arr[i] = i + 1;

    ll idx(0);
    for (ll level = 1; level < N; ++level) {
        idx += (level * level * level - 1);
        idx = (arr.size() + idx) % arr.size();
        arr.erase(arr.begin() + idx);
    }
    cout << arr[0];

    return 0;
}
