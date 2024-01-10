#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int n; in n;
    vector<int> vec; vec.reserve(n);
    int prev, sameCnt(1), patternCnt(1); in prev;

    auto pushSameCnt = [&](int cnt) -> void {
        if (cnt >= 4) vec.push_back(-1);
        else if (cnt == 3) vec.push_back(1);
        else if (cnt == 2) vec.push_back(0);
        };

    For1i(n - 1) {
        int a; in a;
        if (prev != a) {
            patternCnt++;
            pushSameCnt(sameCnt);
            sameCnt = 1;
        }
        else {
            sameCnt++;
            if (patternCnt != 1) vec.push_back(patternCnt);
            patternCnt = 1;
        }
        prev = a;
    }

    if (patternCnt != 1) vec.push_back(patternCnt);
    else pushSameCnt(sameCnt);

    if (vec.size() == 1) {
        if (vec[0] == -1 || vec[0] == 1) out 3;
        else if (vec[0] == 0) out 2;
        else out vec[0];
        return 0;
    }

    int ret(0);
    Fori(vec.size()) {
        int now = vec[i], sum(0), LMR;
        if (i == 0) LMR = -1;
        else if (i == vec.size() - 1) LMR = 1;
        else LMR = 0;

        if (now == 0) { // 2
            if (LMR == -1) sum = vec[i + 1] + 1;
            else if (LMR == 0) sum = max(vec[i - 1], vec[i + 1]) + 1;
            else sum = vec[i - 1] + 1;
        }
        else if (now == 1) { // 3
            if (LMR == -1) sum = vec[i + 1] + 2;
            else if (LMR == 0) sum = vec[i - 1] + vec[i + 1] + 1;
            else sum = vec[i - 1] + 2;
        }
        else if (now == -1) { // >= 4
            if (LMR == -1) sum = vec[i + 1] + 2;
            else if (LMR == 0) sum = max(vec[i - 1], vec[i + 1]) + 2;
            else sum = vec[i - 1] + 2;
        }
        else { // pattern
            sum = vec[i];
            if (LMR == -1) {
                if (vec[i + 1] == 0) {
                    if (i + 2 < vec.size() - 1) sum += vec[i + 2];
                    else sum++;
                }
                else sum++;
            }
            else if (LMR == 0) {
                if (vec[i - 1] == 0) {
                    if (i - 2 >= 0) sum += vec[i - 2];
                    else sum++;
                }
                else sum++;

                if (vec[i + 1] == 0) {
                    if (i + 2 < vec.size()) sum += vec[i + 2];
                    else sum++;
                }
                else sum++;
            }
            else if (LMR == 1) {
                if (vec[i - 1] == 0) {
                    if (i - 2 >= 0) sum += vec[i - 2];
                    else sum++;
                }
                else sum++;
            }
        }
        ret = max(ret, sum);
    }
    out ret;
}