#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define out cout <<
#define in cin >>
#define endl << "\n"

using namespace std;

int main() {
    Sync;

    string s;
    in s;

    int x = s[0] - 'a';
    int y = s[1] - '1';

    int dx[8] = {2,2,1,1,-1,-1,-2,-2};
    int dy[8] = {1,-1,2,-2,2,-2,1,-1};

    vector<string> ans;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && nx < 8 && 0 <= ny && ny < 8) {
            string t;
            t.push_back(nx + 'a');
            t.push_back(ny + '1');
            ans.push_back(t);
        }
    }

    sort(ans.begin(), ans.end());
    for (auto &v : ans) out v endl;

    return 0;
}
