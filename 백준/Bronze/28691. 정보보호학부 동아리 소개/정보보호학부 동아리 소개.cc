#include<iostream>

using namespace std;

int main(){
    string n; cin >> n;
    if (n == "M")
        cout << "MatKor";
    else if (n == "W")
        cout << "WiCys";
    else if (n == "C")
        cout << "CyKor";
    else if (n == "A")
        cout << "AlKor";
    else 
        cout << "$clear";
}