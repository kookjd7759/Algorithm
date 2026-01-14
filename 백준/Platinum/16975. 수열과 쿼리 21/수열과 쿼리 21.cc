#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

using ll = long long;

class Segment_tree {
private:
    vector<ll> node;

public:
    Segment_tree(int size) { node.assign(size * 4 + 1, 0LL); }

    void update(int current, int left, int right, int target_left, int target_right, ll add) {
        if (right < target_left || target_right < left) return;
        if (target_left <= left && right <= target_right) {
            node[current] += add;
            return;
        }

        int mid((left + right) / 2);
        update(current * 2, left, mid, target_left, target_right, add);
        update(current * 2 + 1, mid + 1, right, target_left, target_right, add);
    }

    ll query(int current, int left, int right, int target) {
        if (right < target || target < left)
            return 0;
        if (left == right) return node[current];
            
        int mid((left + right) / 2);
        if (target <= mid) return node[current] + query(current * 2, left, mid, target);
        else               return node[current] + query(current * 2 + 1, mid + 1, right, target);
        }
};

int main() {
    Sync;

    int N; cin >> N;
    vector<ll> origin(N + 1);
    for (int i = 1; i <= N; ++i) cin >> origin[i];
    Segment_tree tree(N);

    int M, last_ans(0); cin >> M;
    while (M--) {
        int ver; cin >> ver;
        if (ver == 1) {
            int left, right, K; cin >> left >> right >> K;
            tree.update(1, 1, N, left, right, K);
        }
        else if (ver == 2) {
            int x; cin >> x;
            cout << origin[x] + tree.query(1, 1, N, x) << "\n";
        }
    }

    return 0;
}
