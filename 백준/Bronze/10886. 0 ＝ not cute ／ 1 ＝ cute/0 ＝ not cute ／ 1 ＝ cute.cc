#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int ret(0);
    while (n--){
        int a; cin >> a;
        if (a == 0) a--;
        ret += a;
    }
    
    if (ret < 0) cout << "Junhee is not cute!";
    else cout << "Junhee is cute!";
}