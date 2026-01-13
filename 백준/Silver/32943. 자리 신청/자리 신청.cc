#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

struct Log {
    int time;
    int number;
    int id;
    Log() {}
    void input() { cin >> time >> number >> id; }
};

int main() {
    Sync;

    int students, seats, logs; cin >> students >> seats >> logs; 
    vector<Log> log_vec(logs);
    for (int i = 0; i < logs; ++i) log_vec[i].input();
    sort(log_vec.begin(), log_vec.end(), [&](const Log& a, const Log& b) -> bool { return a.time < b.time; });
    vector<int> seat_vec(seats + 1, 0), student(students + 1, 0);
    for (const Log log : log_vec) {
        if (seat_vec[log.number]) continue;
        if (student[log.id]) seat_vec[student[log.id]] = 0;
        seat_vec[log.number] = log.id;
        student[log.id] = log.number;
    }
    for (int i = 1; i <= students; ++i) if (student[i])
        cout << i << ' ' << student[i] << "\n";

    return 0;
}
