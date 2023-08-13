#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int N, count_ = 0;

bool Comp(array<int, 15> Arr, int index) {
    for (int i = 0; i < index; i++) {
        if (index - i == abs(Arr.at(i) - Arr.at(index)) || Arr.at(i) == Arr.at(index))
            return false;
    }

    return true;
}

void Func(array<int, 15>& Arr, int index) {
    if (index == N) {
        count_++;
        return;
    }

    for (int i = 0; i < N; i++) {
        Arr.at(index) = i + 1;
        if (Comp(Arr, index)) 
            Func(Arr, index + 1);
    }
}

int main() {
    cin >> N;
    array<int, 15> Arr{};

    Func(Arr, 0);
    cout << count_;

    return 0;
}