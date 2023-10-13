#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a, b; cin >> a >> b;
    string res = "";
    for (size_t i = 0; i < a.size(); i++)
        res += (a[i] >= b[i]) ? a[i] : b[i];

    cout << res << "\n";
}