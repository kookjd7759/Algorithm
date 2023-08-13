#include <iostream>
#include <array>

using namespace std;

array<int, 12> arr_num {};
int Min = 1000000001, Max = -1000000001;
int N;

enum {
    Plus,
    Minus,
    Multiple,
    Division
};

void Input(array<int, 4>& arr_Operater) {
    for (int i = 0; i < N; i++)
        cin >> arr_num.at(i);

    for (int i = 0; i < 4; i++) 
        cin >> arr_Operater.at(i);
}

void Func(int index, array<int, 4> arr_Operater, int sum) {
    if (index + 1 == N) {
        if (Min > sum)
            Min = sum;
        if (Max < sum)
            Max = sum;
        return;
    }
    else {
        if (arr_Operater[Plus] > 0) {
            arr_Operater[Plus]--;
            Func(index + 1, arr_Operater, sum + arr_num.at(index + 1));
            arr_Operater[Plus]++;
        }

        if (arr_Operater[Minus] > 0) {
            arr_Operater[Minus]--;
            Func(index + 1, arr_Operater, sum - arr_num.at(index + 1));
            arr_Operater[Minus]++;
        }

        if (arr_Operater[Multiple] > 0) {
            arr_Operater[Multiple]--;
            Func(index + 1, arr_Operater, sum * arr_num.at(index + 1));
            arr_Operater[Multiple]++;
        }

        if (arr_Operater[Division] > 0) {
            arr_Operater[Division]--;
            Func(index + 1, arr_Operater, sum / arr_num.at(index + 1));
            arr_Operater[Division]++;
        }
    }
}

int main() {
    array<int, 4> arr_Operater {};
    cin >> N; Input(arr_Operater);
    Func(0, arr_Operater, arr_num.at(0));

    cout << Max << "\n" << Min;

    return 0;
}