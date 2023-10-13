#include <iostream>

using namespace std;

int main() {
    double a, c, e; cin >> a >> c >> e;
    double arr[3];
    for (int i = 0; i < 3; i++) cin >> arr[i];

    if (arr[0] >= a && arr[1] >= c && arr[2] >= e) cout << 'A';
    else if (arr[0] >= a / 2 && arr[1] >= c && arr[2] >= e) cout << 'B';
    else if (arr[1] >= c && arr[2] >= e) cout << 'C';
    else if (arr[1] >= c / 2 && arr[2] >= e / 2) cout << 'D';
    else cout << 'E';
}