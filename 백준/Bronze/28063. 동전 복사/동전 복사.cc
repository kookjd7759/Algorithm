#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;
	
    int N, x, y; cin >> N >> x >> y;
    if (N == 1) {
        cout << 0;
        return 0;
    }
    int isEdge_x((int)(x == 1 || x == N));
    int isEdge_y((int)(y == 1 || y == N));
    int ver = isEdge_x + isEdge_y;
    if (ver == 2) cout << 2;
    else if (ver == 1) cout << 3;
    else cout << 4;

    return 0;
}
