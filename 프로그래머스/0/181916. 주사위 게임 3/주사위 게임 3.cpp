#include <string>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    map<int, int> m;
    auto insert = [&](int n) -> void{
        m.count(n) ? m[n]++ : m[n] = 1;
    };
    insert(a); insert(b); insert(c); insert(d);
    
    if (m.size() == 1) answer = 1111 * a;
    else if (m.size() == 2){
        bool same(true);
        for (const auto n : m) if(n.second == 3) same = false;
        
        int p, q;
        if (!same) {
            for (const auto n : m) 
                if(n.second == 3) p = n.first; else q = n.first;
            answer = pow((10 * p + q), 2);
        }
        else {
            for (const auto n : m) same ? p = n.first, same = false : q = n.first;
        answer = (p + q) * abs(p - q);
        }
    }
    else if (m.size() == 3){
        answer = 1;
        for (const auto n : m) if(n.second == 1) answer *= n.first;
    }
    else answer = min(a, min(b, min(c, d)));
    return answer;
}