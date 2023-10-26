#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 
#define spc << " " << 
#define ent << "\n"

using namespace std;

int main() {
	Sync;

    int n; in n;
    int cnt(1), ret(0);
    while (n > 0) {
        if (n >= cnt) {
            n -= cnt;
            ret++;
            cnt++;
        }
        else {
            cnt = 1;
        }
    }
    out ret;
}