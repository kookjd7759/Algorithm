#include <iostream>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >> 
#define out cout << 
#define spc << " " << 
#define ent << "\n"

using namespace std;

int main() {
	Sync;

    int a, b, c, n, ch = 0; in a >> b >> c >> n;
    for (int k = 0; k < (n / c + 1); k++) {
        for (int i = 0; i < (n / b + 1); i++) {
            for (int j = 0; j < (n / a + 1); j++) {
                if ((k * c) + (i * b) + (j * a) == n)
                    ch = 1;
            }
        }
    }
    cout << ch;
}