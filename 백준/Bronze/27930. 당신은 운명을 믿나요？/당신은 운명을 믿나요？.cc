#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;
	
    string YONSEI("YONSEI"), KOREA("KOREA");
    string line; cin >> line;
    int yi(0), ki(0);
    for (int i = 0; i < line.size(); ++i) {
        char cur = line[i];
        if (cur == YONSEI[yi]) yi++;
        if (cur == KOREA[ki]) ki++;

        if (yi >= YONSEI.size()) {
            cout << "YONSEI";
            break;
        }

        if (ki >= KOREA.size()) {
            cout << "KOREA";
            break;
        }
    }

    return 0;
}
