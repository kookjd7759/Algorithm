#include <iostream>
#include <set>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int L; cin >> L;

    string cmd;
    cin >> cmd;

    int x = 0, y = 0;
    set<pair<int,int>> st;
    st.insert({x, y});

    for (char c : cmd) {
        if (c == 'N') y++;
        else if (c == 'S') y--;
        else if (c == 'E') x++;
        else if (c == 'W') x--;
        st.insert({x, y});
    }

    cout << st.size();
    return 0;
}
