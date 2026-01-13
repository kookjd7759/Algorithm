#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

struct Point {
    int x;
    int y;
};
bool compX(const Point& p1, const Point& p2) { return p1.x < p2.x; }
bool compY(const Point& p1, const Point& p2) { return p1.y < p2.y; }
struct Cmp {
    bool operator()(const Point& a, const Point& b) const {
        if (a.x != b.x) return a.x < b.x;
        return a.y < b.y;
    }
};
vector<Point> vec;

int distance(const Point& p1, const Point& p2) {
    int dx(abs(p1.x - p2.x)), dy(abs(p1.y - p2.y));
    return dx * dx + dy * dy;
}

int func(int start, int end) {
    int diff(end - start), min_dist(2e9);
    if (diff <= 2) {
        for (int i = start; i < end; ++i) for (int j = i + 1; j <= end; ++j) {
            int dist = distance(vec[i], vec[j]);
            min_dist = min(min_dist, dist);
        }
        return min_dist;
    }
    
    int mid = start + diff / 2;
    min_dist = min(func(start, mid), func(mid + 1, end));
    int gap = (int)(sqrt(min_dist) + 0.5);
    int l = vec[mid].x - gap;
    int r = vec[mid].x + gap;
    vector<Point> filtered; filtered.reserve(diff);
    for (int i = start; i <= end; ++i) if (l <= vec[i].x && vec[i].x <= r) 
        filtered.push_back(vec[i]);
    sort(filtered.begin(), filtered.end(), compY);

    for (int i = 0; i < filtered.size() - 1; ++i) {
        for (int j = i + 1; j < filtered.size(); ++j) {
            int y_dist = filtered[j].y - filtered[i].y;
            if (y_dist * y_dist > min_dist) break;
            min_dist = min(min_dist, distance(filtered[i], filtered[j]));
        }
    }
    return min_dist;
}

int main() {
    Sync;

    int N; cin >> N;
    vec.resize(N);
    bool isSame(false);
    set<Point, Cmp> s;
    for (int i = 0; i < N; ++i) {
        Point point;
        cin >> point.x >> point.y;
        vec[i] = point;
        if (s.count(point) > 0) isSame = true;
        s.insert(point);
    }
    if (isSame) {
        cout << 0;
        return 0;
    }
    sort(vec.begin(), vec.end(), compX);
    cout << func(0, N - 1);

    return 0;
}
