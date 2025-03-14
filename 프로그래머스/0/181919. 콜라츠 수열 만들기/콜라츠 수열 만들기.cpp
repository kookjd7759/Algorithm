#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer; answer.push_back(n);
    while(n != 1){
        if (n & 1) n = 3 * n + 1;
        else n /= 2;
        answer.push_back(n);
    }
    return answer;
}