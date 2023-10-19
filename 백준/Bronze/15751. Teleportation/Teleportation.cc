#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int ab[2], xy[2], dist1, dist2; 
    cin >> ab[0] >> ab[1] >> xy[0] >> xy[1];
    sort(ab, ab + 2); sort(xy, xy + 2);
    dist1 = ab[1] - ab[0];
    dist2 = abs(ab[0] - xy[0]) + abs(ab[1] - xy[1]);
    cout << min(dist1, dist2);
}