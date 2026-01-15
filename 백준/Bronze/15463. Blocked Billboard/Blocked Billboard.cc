#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

using ll = long long;

struct Rect { int x1, y1, x2, y2; };

ll area(const Rect& r) {
    return 1LL * (r.x2 - r.x1) * (r.y2 - r.y1);
}

ll overlapArea(const Rect& a, const Rect& b) {
    int ox = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
    int oy = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
    return 1LL * ox * oy;
}

int main() {
    Sync;

    Rect b1, b2, t;
    cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
    cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;
    cin >> t.x1  >> t.y1  >> t.x2  >> t.y2;

    ll visible1 = area(b1) - overlapArea(b1, t);
    ll visible2 = area(b2) - overlapArea(b2, t);

    cout << (visible1 + visible2) << "\n";
    return 0;
}
