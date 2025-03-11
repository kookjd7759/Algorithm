#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer("");
    int prev = numLog[0];
    for (const int n : numLog){
        int diff = n - prev;
        prev = n;
        if (diff == 1) answer += 'w';
        else if (diff == -1) answer += 's';
        else if (diff == 10) answer += 'd';
        else if (diff == -10) answer += 'a';
    }
    return answer;
}