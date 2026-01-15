#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;


int main() {
    Sync;
	
    int arr[7], visited[7];
    for (int i = 0; i < 7; ++i) cin >> arr[i], visited[i] = false;
    sort(arr, arr + 7);

    for (int ai = 0; ai < 7; ++ai) for (int bi = 0; bi < 7; ++bi) for (int ci = 0; ci < 7; ++ci) {
        if (ai == bi || bi == ci || ai == ci) continue;
        visited[ai] = visited[bi] = visited[ci] = true;
        int a(arr[ai]), b(arr[bi]), c(arr[ci]);

        for (int abi = 0; abi < 7; ++abi) for (int bci = 0; bci < 7; ++bci)
            for (int cai = 0; cai < 7; ++cai) for (int abci = 0; abci < 7; ++abci) {
                if (visited[abi] || visited[bci] || visited[cai] || visited[abci]) continue;
                if (abi == bci || abi == cai || abi == abci ||
                    bci == cai || bci == abci || cai == abci) continue;
                int ab(arr[abi]), bc(arr[bci]), ca(arr[cai]), abc(arr[abci]);

                if (ab == a + b && bc == b + c && ca == c + a && abc == a + b + c) {
                    cout << a << ' ' << b << ' ' << c;
                    return 0;
                }
        }
        visited[ai] = visited[bi] = visited[ci] = false;
    }


    return 0;
}
