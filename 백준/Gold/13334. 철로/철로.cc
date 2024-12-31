#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout << 
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int N, L;
vector<pair<int, int>> vec;
bool comp(const pair<int, int>&a, const pair<int, int>&b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

void init() {
    in N;
    Fori(N) {
        int a, b; in a >> b;
        if (a > b) swap(a, b);
        pair<int, int> p{ a, b };
        vec.push_back(p);
    }
    sort(vec.begin(), vec.end(), comp);
    in L;
}

int main() {
    Sync;

    init();

    int maxi(0);
    priority_queue<int, vector<int>, greater<int> > pq;
    Fori(vec.size()) {
        if (vec[i].second - vec[i].first > L) continue;
        
        pq.push(vec[i].first);
        while (!pq.empty()) {
            if (pq.top() + L >= vec[i].second) {
                maxi = max(maxi, (int)pq.size());
                break;
            }
            else pq.pop();
        }
    }
    out maxi;
}