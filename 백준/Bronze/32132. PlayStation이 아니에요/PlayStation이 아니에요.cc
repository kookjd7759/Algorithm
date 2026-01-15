#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;
	
    int n; string line; cin >> n >> line;
    bool PS(false);
    char prev(' ');
    for (int i = 0; i < n; ++i) {
        if (line[i] == 'S') {
            cout << line[i];
            PS = (prev == 'P');
            prev = line[i];
            continue;
        }

        if (PS && (line[i] == '4' || line[i] == '5'))
            continue;

        cout << line[i];
        PS = false;
        prev = line[i];
    }

    return 0;
}
