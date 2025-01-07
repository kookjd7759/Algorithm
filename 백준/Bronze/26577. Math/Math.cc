#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout << 
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int cal(int a, int b, char op) {
    return op == '+' ? a + b
        : op == '-' ? a - b
        : op == '/' ? a / b
        : op == '*' ? a * b
        : op == '%' ? a % b
        : 0;
}

int main() {
    Sync;

    int n; in n; cin.ignore();
    Fori(n) {
        vector<int> num;
        vector<char> oper;
        string line, temp; getline(cin, line);
        stringstream ss(line);
        while (getline(ss, temp, ' ')) {
            if (temp.size() == 1 && !isdigit(temp[0])) oper.push_back(temp[0]);
            else num.push_back(stoi(temp));
        }

        while (num.size() > 1) {
            bool flag(false);
            Fori(oper.size()) {
                char op = oper[i];
                if (op == '*' || op == '/' || op == '%') {
                    num[i] = cal(num[i], num[i + 1], op);
                    num.erase(num.begin() + (i + 1));
                    oper.erase(oper.begin() + i);
                    flag = true;
                    break;
                }
            }
            if (flag) continue;

            Fori(oper.size()) {
                char op = oper[i];
                if (op == '+' || op == '-') {
                    num[i] = cal(num[i], num[i + 1], op);
                    num.erase(num.begin() + (i + 1));
                    oper.erase(oper.begin() + i);
                    break;
                }
            }
        }

        out num[0] endl;
    }
}