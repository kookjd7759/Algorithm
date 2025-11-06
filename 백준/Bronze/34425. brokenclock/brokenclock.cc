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

const char number[10][7] = {
    {'1', '1', '1', '0', '1', '1', '1'}, // 0
    {'0', '0', '1', '0', '0', '1', '0'}, // 1
    {'1', '0', '1', '1', '1', '0', '1'}, // 2
    {'1', '0', '1', '1', '0', '1', '1'}, // 3
    {'0', '1', '1', '1', '0', '1', '0'}, // 4
    {'1', '1', '0', '1', '0', '1', '1'}, // 5
    {'1', '1', '0', '1', '1', '1', '1'}, // 6
    {'1', '0', '1', '0', '0', '1', '0'}, // 7
    {'1', '1', '1', '1', '1', '1', '1'}, // 8
    {'1', '1', '1', '1', '0', '1', '0'}  // 9
};

vector<int> match(char* arr) {
    vector<int> ret;
    Fori(10) {
        bool isMatched = true;
        Forj(7) {
            if (arr[j] == '-') continue;
            if (arr[j] != number[i][j]) {
                isMatched = false;
                break;
            }
        }
        if (isMatched) ret.push_back(i);
    }
    return ret;
}

int main() {
    Sync;

    vector<int> numbers[6];
    Fori(6) {
        char arr[7]; Forj(7) in arr[j];
        numbers[i] = match(arr);
    }
    for (int n1 : numbers[0]) for (int n2 : numbers[1]) {
        int h = n1 * 10 + n2;
        if (h >= 24) continue;

        for (int n3 : numbers[2]) for (int n4 : numbers[3]) {
            int m = n3 * 10 + n4;
            if (m >= 60) continue;

            for (int n5 : numbers[4]) for (int n6 : numbers[5]) {
                int s = n5 * 10 + n6;
                if (s >= 60) continue;

                out n1 << n2 << ':' << n3 << n4 << ':' << n5 << n6 << "\n";
            }
        }
    }
}
