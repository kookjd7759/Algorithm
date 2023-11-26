#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> vec;
    string st;
    while(cin >> st) vec.push_back(st);
    
    int cnt(0);
    for (int i = 0; i < vec.size() - 1; i++){
        if (vec[vec.size() - 1].size() >= vec[i].size()) continue;
        if (vec[i].substr(0, vec[vec.size() - 1].size()) == vec[vec.size() - 1])
            cnt++;
    }
    
    cout << cnt;
}