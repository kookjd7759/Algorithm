#include <iostream>

using namespace std;

int main() {
    int AB[2] = {0, 0};
    for (int i = 0; i < 2; i++)
        for (int j = 3; j > 0; j--){
            int n; cin >> n;
            AB[i] += j * n;
        }
    
    if (AB[0] > AB[1]) cout << "A";
    else if (AB[0] < AB[1]) cout << "B";
    else cout << "T";
}