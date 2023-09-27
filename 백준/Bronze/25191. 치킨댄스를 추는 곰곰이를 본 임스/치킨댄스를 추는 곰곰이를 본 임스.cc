#include <iostream>

using namespace std;

int main() {
    int KFC, PEPSI, TERRA;
    cin >> KFC >> PEPSI >> TERRA; PEPSI /= 2;
    cout << min(KFC, PEPSI + TERRA);
}