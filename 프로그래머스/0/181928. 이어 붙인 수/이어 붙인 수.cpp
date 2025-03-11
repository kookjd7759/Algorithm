#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string add(""), even("");
    for (const int n : num_list) 
        (n & 1) ? add += to_string(n) : even += to_string(n);
    answer = stoi(add) + stoi(even);
    return answer;
}