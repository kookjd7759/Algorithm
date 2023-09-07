#include <iostream>

using namespace std;

int main() {
    int n[4], a[3];
    for (int i = 0; i < 4; i++)
        cin >> n[i];
        
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    
    for (int i = 0; i < 4; i++)
        if (a[0] == n[i]){
            cout << i + 1;
            return 0;
        }
    cout << 0;
}