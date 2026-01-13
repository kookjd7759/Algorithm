#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;


int main() {
    Sync;

    int n, cnt[3]{ 0,0,0 }; cin >> n;
    for (int i = 0; i < n * 3; ++i) {
        int num; cin >> num;
        if (num == 1) cnt[0]++;
        if (num == 2) cnt[1]++;
        if (num == 3) cnt[2]++;
    }

    if (cnt[0] > cnt[1] && cnt[0] > cnt[2]) cout << (cnt[1] < cnt[2] ? 2 : 3) << "\n" << 1;
    if (cnt[1] > cnt[0] && cnt[1] > cnt[2]) cout << (cnt[0] < cnt[2] ? 1 : 3) << "\n" << 2;
    if (cnt[2] > cnt[0] && cnt[2] > cnt[1]) cout << (cnt[0] < cnt[1] ? 1 : 2) << "\n" << 3;

    return 0;
}
