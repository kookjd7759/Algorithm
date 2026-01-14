#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

class Segment_tree {
private:
    vector<vector<int>> node;

public:
    Segment_tree(int size) { node.resize(size * 4 + 1); }

    int init(const vector<int>& origin, int current, int left, int right) {
        if (left == right) {
            node[current].push_back(origin[left]);
            return current;
        }
        int mid((left + right) / 2);
        int l = init(origin, current * 2, left, mid);
        int r = init(origin, current * 2 + 1, mid + 1, right);
        node[current].reserve(node[l].size() + node[r].size());
        node[current].insert(node[current].end(), node[l].begin(), node[l].end());
        node[current].insert(node[current].end(), node[r].begin(), node[r].end());
        sort(node[current].begin(), node[current].end());
        return current;
    }

    int query(int current, int left, int right, int target_left, int target_right, int K) {
        if (right < target_left || target_right < left) 
            return 0;
        if (target_left <= left && right <= target_right)
            return node[current].size() - (upper_bound(node[current].begin(), node[current].end(), K) - node[current].begin());
        int mid((left + right) / 2);
        return query(current * 2, left, mid, target_left, target_right, K)
            + query(current * 2 + 1, mid + 1, right, target_left, target_right, K);
    }
};

int main() {
    Sync;

    int N; cin >> N;
    vector<int> origin(N + 1);
    Segment_tree tree(N);
    for (int i = 1; i <= N; ++i) cin >> origin[i];
    tree.init(origin, 1, 1, N);

    int M; cin >> M;
    while (M--) {
        int left, right, K; cin >> left >> right >> K;
        cout << tree.query(1, 1, N, left, right, K) << "\n";
    }

    return 0;
}
