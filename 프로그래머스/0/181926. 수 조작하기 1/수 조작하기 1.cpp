#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (const char c : control)
        if (c == 'w') ++n;
        else if (c == 's') --n;
        else if (c == 'd') n += 10;
        else if (c == 'a') n -= 10;
    return n;
}