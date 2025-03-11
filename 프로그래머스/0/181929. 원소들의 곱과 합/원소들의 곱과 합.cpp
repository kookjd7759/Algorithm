#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum(0), mul(1);
    for (int i = 0; i < num_list.size(); ++i)
        sum += num_list[i], mul *= num_list[i];
    sum *= sum;
    answer = mul < sum ? 1 : 0;
    return answer;
}