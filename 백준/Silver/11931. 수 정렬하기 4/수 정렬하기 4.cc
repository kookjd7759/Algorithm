#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(const int& a, const int& b){
    return a > b;
}

vector<int> vec;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    while (n--){
        int a; cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end(), comp);
    
    for (const auto iter : vec)
        cout << iter << "\n";
}