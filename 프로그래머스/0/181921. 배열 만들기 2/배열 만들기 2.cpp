#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> vec;
    for (int i = l; i <= r; i += 5){
        while (i % 5 != 0) ++i;
        int n = i;
        while (n != 0 && n % 5 == 0) n /= 10;
        if (!n) vec.push_back(i);
    }
    if (!vec.size()) vec.push_back(-1);
    return vec;
}