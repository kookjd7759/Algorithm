#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    string st; cin >> st;
    for (int i = 0; i < st.size(); ++i) cout << i << "\n";

    return 0;
}
