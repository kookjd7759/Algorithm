#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int i = 0; i < queries.size(); ++i){
        int n = 2e9;
        for (int j = queries[i][0]; j <= queries[i][1]; ++j){
            if (queries[i][2] < arr[j]) n = min(n, arr[j]);
        }
        if (n == 2e9) answer.push_back(-1);
        else answer.push_back(n);
    }
    return answer;
}