#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    int cntSolved = 0;
    for (int i = 0; i < n; i++) {
        string st; cin >> st;
        if (st.find('+') != string::npos)
            cntSolved++;
    }

    cout << cntSolved << "\n";
}