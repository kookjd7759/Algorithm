#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N; cin >> N;

    long long ans[26] = {0};

    for (int i = 0; i < N; i++) {
        string a, b;
        cin >> a >> b;

        int ca[26] = {0}, cb[26] = {0};
        for (char ch : a) ca[ch - 'a']++;
        for (char ch : b) cb[ch - 'a']++;

        for (int k = 0; k < 26; k++) ans[k] += (ca[k] > cb[k] ? ca[k] : cb[k]);
    }

    for (int k = 0; k < 26; k++) cout << ans[k] << "\n";

    return 0;
}
