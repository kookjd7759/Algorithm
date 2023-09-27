#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int ret(1e9);
    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        if (a <= b) ret = min(ret, b);
    }
    ret == 1e9 ? cout << -1 : cout << ret;
}