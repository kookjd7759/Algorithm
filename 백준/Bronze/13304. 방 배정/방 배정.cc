#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define Roop(x) while(x--) 

using namespace std;

char str[50];

int main() {
    Sync;

    int stu[6][2], n, k; in n >> k;
    memset(stu, 0, sizeof(stu));
    int ret(0);
    Fori(n) {
        int s, y; in s >> y;
        stu[y - 1][s]++;
    }

    auto sumation = [&](int x) -> int {
        if (!x) return 0;
        return (x % k == 0 ? x / k : x / k + 1);
        };

    int temp = stu[0][0] + stu[0][1] + stu[1][0] + stu[1][1];
    ret += sumation(temp);

    temp = stu[2][0] + stu[3][0];
    ret += sumation(temp);

    temp = stu[2][1] + stu[3][1];
    ret += sumation(temp);

    temp = stu[4][0] + stu[5][0];
    ret += sumation(temp);

    temp = stu[4][1] + stu[5][1];
    ret += sumation(temp);

    out ret;
}