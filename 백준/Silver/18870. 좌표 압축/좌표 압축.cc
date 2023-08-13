#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>

using namespace std;

int main() {
    int N; cin >> N;
    deque<int> origin;
    vector<int> vec;
    vector<int> vec_no_same;

    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        origin.push_back(num);
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());
    vec_no_same.push_back(vec.at(0));

    for (int i = 1; i < N; i++) 
        if (vec.at(i) != vec.at(i - 1))
            vec_no_same.push_back(vec.at(i));

    for (int i = 0; i < N; i++) {
        cout << lower_bound(vec_no_same.begin(), vec_no_same.end(), origin.front()) - vec_no_same.begin()
            << " ";

        origin.pop_front();
    }

    return 0;
}