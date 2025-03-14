#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int sum(0);
    for (const char c : number) sum += c - '0';
    answer = sum % 9;
    return answer;
}