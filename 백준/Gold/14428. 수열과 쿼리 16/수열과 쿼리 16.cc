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

struct Data {
    int idx = -1, num = 2e9;
    Data () {}
    Data(int i, int n) : idx(i), num(n) {}
};

Data mini_data(const Data& a, const Data& b) {
    Data data;
    if (a.num == b.num) return (a.idx < b.idx ? a : b);
    return (a.num < b.num ? a : b);
}

Data init(Data* ori, Data* tree, int start, int end, int node) {
    if (start == end) return tree[node] = ori[start];
    int mid = (start + end) / 2;
    return tree[node] = mini_data(init(ori, tree, start, mid, node * 2)
        , init(ori, tree, mid + 1, end, node * 2 + 1));
}

Data mini(Data* tree, int start, int end, int node, int left, int right) {
    if (right < start || end < left) return Data();

    if (left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return mini_data(mini(tree, start, mid, node * 2, left, right), mini(tree, mid + 1, end, node * 2 + 1, left, right));
}

Data update(Data* tree, int start, int end, int node, Data data) {
    if (data.idx < start || end < data.idx) return tree[node];
    if (start == data.idx && data.idx == end) return tree[node] = data;
    
    int mid = (start + end) / 2;
    return tree[node] = mini_data(update(tree, start, mid, node * 2, data), update(tree, mid + 1, end, node * 2 + 1, data));
}

int main() {
    Sync;

    int N, Q; in N;
    Data* ori = new Data[N + 1]; 
    For1i(N) {
        Data data; data.idx = i; in data.num;
        ori[i] = data;
    }
    Data* tree = new Data[N * 4]; 
    Fori(N * 4) tree[i] = Data(-1, 2e9);
    init(ori, tree, 1, N, 1);

    in Q;
    while (Q--) {
        int v, a, b; in v >> a >> b;
        if (v == 1) {
            update(tree, 1, N, 1, Data(a, b));
            ori[a].num = b;
        }
        else out mini(tree, 1, N, 1, a, b).idx endl;
    }
}