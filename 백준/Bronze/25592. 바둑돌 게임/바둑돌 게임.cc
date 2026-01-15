#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N, take(1); cin >> N;
    bool isMyTurn(false);
    while (true) {
        isMyTurn = !isMyTurn;
        N -= take++;
        if (N > 0) continue;

        if (N == 0) cout << (isMyTurn ? 0 : take);
        else        cout << (isMyTurn ? -N : 0);
        break;
    }

    return 0;
}
