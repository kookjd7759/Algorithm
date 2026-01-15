#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

bool check(const vector<int>& vec1, const vector<int>& vec2) {
    int len(vec1.size());
    for (int i = 0; i < len - 1; ++i) for (int j = i + 1; j < len; ++j) {
        if (!((vec1[i]  < vec1[j] && vec2[i]  < vec2[j]) ||
              (vec1[i] == vec1[j] && vec2[i] == vec2[j]) ||
              (vec1[i]  > vec1[j] && vec2[i]  > vec2[j])))
            return false;
    }
    return true;
}

int main() {
    Sync;
	
    int N, M; cin >> N >> M;
    vector<vector<int>> space(N, vector<int>(M));
    for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j)
        cin >> space[i][j];

    int ans(0);
    for (int i = 0; i < N - 1; ++i) for (int j = i + 1; j < N; ++j) {
        if (check(space[i], space[j])) ans++;
    }
    cout << ans;

    return 0;
}
