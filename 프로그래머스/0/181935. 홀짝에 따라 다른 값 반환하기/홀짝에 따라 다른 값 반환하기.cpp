#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = n; i >= 0; --i){
        if ((n & 1) == (i & 1)) {
            (n & 1) ? answer += i : answer += i * i;
        }
    }
    return answer;
}