#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;
using ll = long long;

struct HArc {
    int id;
    int u, v;
    int low;
    ll base;
    ll mul;
    ll num, den;

    HArc(){}

    inline bool isContain(HArc& b) const { return u <= b.u && b.v <= v; }
    inline ll get_support() const { return num / den; }
    bool operator<(const HArc& b) const { return get_support() < b.get_support(); }
    bool operator<=(const HArc& b) const { return get_support() <= b.get_support(); }
    bool operator==(const HArc& b) const { return get_support() == b.get_support(); }
};
vector<HArc> hArcs; int hArc_size;
vector<vector<int>> child;
vector<int> sub;
vector<priority_queue<HArc>> que; int que_size;
vector<int> que_id;
vector<vector<HArc>> con;

int SIZE;
vector<ll> weight, DP;

void init() {
    // input
    cin >> SIZE; SIZE++;
    hArc_size = que_size = 0;
    hArcs.resize(SIZE + 5); child.resize(SIZE + 5); sub.resize(SIZE + 5);
    weight.assign(SIZE + 5, 0); DP.assign(SIZE + 5, 0); que.resize(SIZE + 5);
    con.resize(SIZE + 5); que_id.resize(SIZE + 5);
    for (int i = 1; i < SIZE; ++i) cin >> weight[i] >> weight[i + 1];

    // initialization
    int min_idx = 1;
    for (int i = 2; i <= SIZE; ++i) if (weight[min_idx] > weight[i]) min_idx = i;

    rotate(weight.begin() + 1, weight.begin() + min_idx, weight.begin() + SIZE + 1);
    weight[SIZE + 1] = weight[1];
    for (int i = 1; i <= SIZE + 1; ++i) 
        DP[i] = DP[i - 1] + weight[i] * weight[i - 1];
}

inline void create_arc(int u, int v) {
    ++hArc_size;
    hArcs[hArc_size].id = hArc_size;
    hArcs[hArc_size].u = u;
    hArcs[hArc_size].v = v;
    hArcs[hArc_size].low = weight[u] < weight[v] ? u : v;
    hArcs[hArc_size].mul = (ll)weight[u] * (ll)weight[v];
    hArcs[hArc_size].base = DP[v] - DP[u] - hArcs[hArc_size].mul;
}

void make_hArc_tree() {
    // calculate cadidate hArc
    stack<int> st;
    vector<pair<int, int>> hLines;
    for (int i = 1; i <= SIZE; i++) {
        while (st.size() >= 2 && weight[i] < weight[st.top()]) {
            st.pop();
            if (st.top() == 1 || i == 1) continue;
            hLines.push_back(make_pair(st.top(), i));
        }
        st.push(i);
    }
    while (!st.empty()) st.pop();

    // make tree
    create_arc(1, SIZE + 1);
    for (const pair<int, int>& p : hLines) {
        create_arc(p.first, p.second);
        while (!st.empty() && hArcs[hArc_size].isContain(hArcs[st.top()])) {
            child[hArc_size].push_back(st.top());
            st.pop();
        }
        st.push(hArc_size);
    }
    while (!st.empty()) { child[1].push_back(st.top()); st.pop(); }
}

ll get_mn_mul(int node) {
    if (node == 1) return (ll)weight[1] * weight[2] + (ll)weight[1] * weight[SIZE];
    HArc& cur = hArcs[node];
    if (cur.u == cur.low) {
        if (con[cur.u].empty() || !cur.isContain(con[cur.u].back()))
            return (ll)weight[cur.u] * weight[cur.u + 1];
        else
            return con[cur.u].back().mul;
    }
    else {
        if (con[cur.v].empty() || !cur.isContain(con[cur.v].back()))
            return (ll)weight[cur.v] * weight[cur.v - 1];
        else
            return con[cur.v].back().mul;
    }
}

inline void add_arc(int cur_node, HArc& arc) {
    que[que_id[cur_node]].push(arc);
    con[arc.u].push_back(arc);
    con[arc.v].push_back(arc);
}

inline void remove_arc(int cur_node) {
    const HArc& hm = que[que_id[cur_node]].top();
    con[hm.u].pop_back();
    con[hm.v].pop_back();
    que[que_id[cur_node]].pop();
}

void merge_pq(int node) {
    int max_child = -1;
    for (auto& it : child[node])
        if (max_child == -1 || sub[max_child] < sub[it])
            max_child = it;
    que_id[node] = que_id[max_child];
    auto& cur_pq = que[que_id[node]];
    for (auto& it : child[node]) {
        if (it == max_child) continue;
        auto& child_pq = que[que_id[it]];
        while (!child_pq.empty()) {
            cur_pq.push(child_pq.top());
            child_pq.pop();
        }
    }
}

void dfs(int node) {
    HArc& cur = hArcs[node];
    sub[node] = 1;
    if (child[node].empty()) {
        que_id[node] = ++que_size;
        cur.den = cur.base;
        cur.num = (ll)weight[cur.low] * (cur.den + cur.mul - get_mn_mul(node));
        add_arc(node, cur);
        return;
    }
    cur.den = cur.base;
    for (auto& it : child[node]) {
        dfs(it);
        sub[node] += sub[it];
        cur.den -= hArcs[it].base;
    }
    cur.num = (ll)weight[cur.low] * (cur.den + cur.mul - get_mn_mul(node));
    merge_pq(node);
    auto& cur_pq = que[que_id[node]];
    while (!cur_pq.empty() && cur_pq.top().get_support() >= weight[cur.low]) {
        auto hm = cur_pq.top();
        cur.den += hm.den;
        remove_arc(node);
        cur.num = (ll)weight[cur.low] * (cur.den + cur.mul - get_mn_mul(node));
    }
    while (!cur_pq.empty() && cur <= cur_pq.top()) {
        auto hm = cur_pq.top();
        cur.den += hm.den;
        remove_arc(node);
        cur.num += hm.num;
    }
    add_arc(node, cur);
}

ll solve() {
    dfs(1);
    ll ans = 0;
    auto& cur_pq = que[que_id[1]];
    while (!cur_pq.empty()) {
        ans += cur_pq.top().num;
        cur_pq.pop();
    }
    return ans;
}

int main() {
    Sync;

    init();
    make_hArc_tree();

    if (weight.size() < 2) cout << 0;
    if (weight.size() == 2) cout << weight[0] * weight[1];
    cout << solve();

    return 0;
}