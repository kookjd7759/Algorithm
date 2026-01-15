#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    string res;

    if (A != 0) {
        if (A == 1) res = "x";
        else if (A == -1) res = "-x";
        else res = to_string(A) + "x";
    }

    if (B != 0) {
        if (!res.empty() && B > 0)
            res += "+" + to_string(B);
        else
            res += to_string(B);
    }

    if (res.empty()) res = "0";

    cout << res;
    return 0;
}
