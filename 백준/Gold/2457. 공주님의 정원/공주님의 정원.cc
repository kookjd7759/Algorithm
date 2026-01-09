#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;

struct Flower {
    int start; 
    int end;
};

bool comp(const Flower& a, const Flower& b) {
    if (a.start == b.start) 
        return a.end > b.end;
    return a.start < b.start;
}

const int day[13]{ 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int to_days(int m, int d) {
    int days = 0;
    for (int i = 1; i < m; ++i) days += day[i];
    days += d;
    return days;
}

int main() {
    Sync;

    int N; cin >> N;
    vector<Flower> flowers(N);
    for (int i = 0; i < N; ++i) {
        int sm, sd, em, ed; cin >> sm >> sd >> em >> ed;
        int s(to_days(sm, sd)), e(to_days(em, ed));
        flowers.push_back({ s, e });
    }
    sort(flowers.begin(), flowers.end(), comp);

    int current(to_days(3, 1)), target(to_days(12, 1));
    int ans(0), idx(0);
    int length = flowers.size();

    while (current < target) {
        int best = current;

        while (idx < length && flowers[idx].start <= current) 
            best = max(best, flowers[idx++].end);

        if (best == current) {
            cout << 0;
            return 0;
        }

        ++ans;
        current = best;
    }

    cout << ans;

    return 0;
}
