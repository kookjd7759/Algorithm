#include<iostream>
#include<cmath>

int64_t Mobius[1000010];

using namespace std;

void Create_Mobius() {
    Mobius[1] = 1;
    for (int i = 1; i <= 1000000; i++) 
        for (int j = 2 * i; j <= 1000000; j += i) 
            Mobius[j] -= Mobius[i];
}

int64_t Function(int64_t n) {
    int64_t Sum = 0;
    for (int64_t i = 1; i * i <= n; i++) 
        Sum += Mobius[i] * (n / (i * i));
       
    return Sum;
}

int main() {
    Create_Mobius();
    int64_t Min, Max; cin >> Min >> Max;
    cout << Function(Max) - Function(Min - 1);

    return 0;
}