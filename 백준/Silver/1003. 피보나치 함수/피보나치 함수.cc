#include <iostream>
#include <array>

using namespace std;

array<pair<int, int>, 40> Arr_1_0{};

void fibonacci(int n) {
    Arr_1_0[0].first = 0; Arr_1_0[0].second = 1;
    Arr_1_0[1].first = 1; Arr_1_0[1].second = 0;

    if (n == 0) 
        cout << Arr_1_0[0].second << " " << Arr_1_0[0].first << "\n";
    else if (n == 1) 
        cout << Arr_1_0[1].second << " " << Arr_1_0[1].first << "\n";
    else {
        for (int i = 2; i <= n; i++) {
            Arr_1_0[i].first = Arr_1_0[i - 1].first + Arr_1_0[i - 2].first;
            Arr_1_0[i].second = Arr_1_0[i - 1].second + Arr_1_0[i - 2].second;
        }

        cout << Arr_1_0[n].second << " " << Arr_1_0[n].first << "\n";
    }
}

int main() {
    int TestCase; cin >> TestCase;
    
    while (TestCase--) {
        int num; cin >> num;
        fibonacci(num);
    }

	return 0;
}