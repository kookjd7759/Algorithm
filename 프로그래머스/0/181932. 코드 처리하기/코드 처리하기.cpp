#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    bool mode(false);
    string answer = "";
    for (int i = 0; i < code.size(); ++i){
        if (code[i] == '1') {
            mode = !mode;
            continue;
        }
        if (mode && (i & 1)) answer += code[i];
        if (!mode && !(i & 1)) answer += code[i];
    } 
    return answer.size() == 0 ? "EMPTY" : answer;
}