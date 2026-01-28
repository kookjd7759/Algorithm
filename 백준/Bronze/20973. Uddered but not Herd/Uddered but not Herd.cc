#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    string order, heard;
    cin >> order >> heard;

    int pos[26];
    for (int i = 0; i < 26; i++) pos[order[i] - 'a'] = i;

    int cnt = 1;
    int cur = -1;

    for (char ch : heard) {
        int p = pos[ch - 'a'];
        if (p <= cur) cnt++;
        cur = p;
    }

    cout << cnt;
    return 0;
}
