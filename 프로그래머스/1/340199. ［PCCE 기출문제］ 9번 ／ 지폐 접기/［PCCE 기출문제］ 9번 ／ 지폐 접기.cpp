#include <string>
#include <vector>
using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    auto fits = [&](int w0, int w1, int b0, int b1) {
        // 회전 가능: 두 가지 방향 중 하나라도 들어가면 OK
        return (b0 <= w0 && b1 <= w1) || (b1 <= w0 && b0 <= w1);
    };

    int answer = 0;
    while (!fits(wallet[0], wallet[1], bill[0], bill[1])) {
        // 항상 더 긴 변을 반으로 접기 (정수 나눗셈으로 내림)
        if (bill[0] >= bill[1]) bill[0] /= 2;
        else                    bill[1] /= 2;
        ++answer;
    }
    return answer;
}
