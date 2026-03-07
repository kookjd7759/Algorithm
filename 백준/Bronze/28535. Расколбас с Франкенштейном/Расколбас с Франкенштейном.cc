#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    string s1, op, s2;
    if (!(cin >> s1 >> op >> s2)) return 0;

    map<string, int> priority = {
        {"N", 1},
        {"Z", 2},
        {"Q", 3},
        {"R", 4}
    };

    int p1 = priority[s1];
    int p2 = priority[s2];

    int res_priority = max(p1, p2);

    if (op == "-" && res_priority < 2) {
        res_priority = 2;
    }

    if (res_priority == 1) cout << "N" << endl;
    else if (res_priority == 2) cout << "Z" << endl;
    else if (res_priority == 3) cout << "Q" << endl;
    else if (res_priority == 4) cout << "R" << endl;

    return 0;
}