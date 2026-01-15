#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int convert(string time){
    int h = (time[0] - '0') * 10 + (time[1] - '0');
    int m = (time[3] - '0') * 10 + (time[4] - '0');
    return h * 60 + m;
}

int rateAt(int minuteOfDay) {
    const int h7 = 7 * 60;
    const int h19 = 19 * 60;
    return (h7 <= minuteOfDay && minuteOfDay < h19) ? 10 : 5;
}

int charge(const string& startTime, int duration) {
    int start = convert(startTime);
    int cost = 0;

    for (int i = 0; i < duration; ++i) {
        int cur = (start + i) % 1440;
        cost += rateAt(cur);
    }
    return cost;
}

int main() {
    Sync;
	
    int N, ans(0); cin >> N;
    for (int i = 0; i < N; ++i) {
        string time; int duration; cin >> time >> duration;
        ans += charge(time, duration);;
    }
    cout << ans;

    return 0;
}
