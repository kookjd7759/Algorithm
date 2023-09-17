#include <iostream>
#include <cstring>
#include <deque>

using namespace std;

int N, K;
int cnt[100001];

int bfs() {
    deque<int> dq; dq.push_back(N);
    cnt[N] = 1;

    while (!dq.empty()) {
        int x = dq.front(); dq.pop_front();

        if (x == K) return cnt[K] - 1;


        if (x << 1 < 100001 && !cnt[x << 1]) {
            dq.push_front(x << 1);
            cnt[x << 1] = cnt[x];
        }

        if (x - 1 >= 0 && !cnt[x - 1]) {
            dq.push_back(x - 1);
            cnt[x - 1] = cnt[x] + 1;
        }

        if (x + 1 < 100001 && !cnt[x + 1]) {
            dq.push_back(x + 1);
            cnt[x + 1] = cnt[x] + 1;
        }
    }
}

int main() {
    cin >> N >> K; memset(cnt, 0, sizeof(cnt));
    cout << bfs();
}