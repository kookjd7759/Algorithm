#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int ab = stoi(to_string(a) + to_string(b));
    int ab2 = a * b * 2;
    answer = ab > ab2 ? ab : ab2;
    return answer;
}