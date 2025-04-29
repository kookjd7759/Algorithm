#include <iostream>
using namespace std;

int main() {
    int g, gb, y, r, ry, T;
    cin >> g >> gb >> y >> r >> ry;
    cin >> T;

    int red = 0, yellow = 0, green = 0;

    int cycle = g + gb + y + r + ry;
    int full = T / cycle;
    int remain = T % cycle;

    // full cycles
    green += full * (g + gb / 2);
    yellow += full * (y + ry);
    red += full * (r + ry);

    // handle remaining seconds
    int steps[] = { g, gb, y, r, ry };
    for (int i = 0; i < 5; i++) {
        if (remain == 0) break;
        int now = min(remain, steps[i]);
        if (i == 0) { // green light
            green += now;
        }
        else if (i == 1) { // green blinking
            green += now / 2;
        }
        else if (i == 2) { // yellow
            yellow += now;
        }
        else if (i == 3) { // red
            red += now;
        }
        else if (i == 4) { // red + yellow
            red += now;
            yellow += now;
        }
        remain -= now;
    }

    cout << red << " " << yellow << " " << green << endl;

    return 0;
}
