#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int cnt(0);
    for (int i = 1; i <= n; i++) {
        string st = to_string(i);
        int num(0);
        for (int j = 0; j < st.size(); j++) 
            num += st[j] - '0';
        if (i % num == 0) cnt++;
    }
    cout << cnt;
}