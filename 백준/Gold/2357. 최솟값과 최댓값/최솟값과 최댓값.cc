#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

struct Node {
    int mini = 2e9, maxi = -2e9;
    Node() {}
    Node(int mini, int maxi) : mini(mini), maxi(maxi) {}
};

Node init(int* ori, Node* tree, int start, int end, int node) {
    if (start == end) return tree[node] = Node(ori[start], ori[start]);
    int mid = (start + end) / 2;
    Node left = init(ori, tree, start, mid, node * 2);
    Node right = init(ori, tree, mid + 1, end, node * 2 + 1);
    return tree[node] = Node(min(left.mini, right.mini), max(left.maxi, right.maxi));
}

Node mini_maxi(Node* tree, int start, int end, int node, int left, int right) {
    if (left > end || right < start) return Node();
    if (left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    Node leftNode = mini_maxi(tree, start, mid, node * 2, left, right);
    Node rightNode = mini_maxi(tree, mid + 1, end, node * 2 + 1, left, right);
    return Node(min(leftNode.mini, rightNode.mini), max(leftNode.maxi, rightNode.maxi));
}

int main() {
    Sync;
    
    int N, M; in N >> M;
    int* ori = new int[N + 1]; For1i(N) in ori[i];
    Node* tree = new Node[N * 4]; init(ori, tree, 1, N, 1);

    while (M--) {
        int left, right; in left >> right;
        Node node = mini_maxi(tree, 1, N, 1, left, right);
        out node.mini spc node.maxi endl;
    }
}