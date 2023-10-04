#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

struct Node {
    int num, index;
};

int N, L;
int arr[5000000];

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> N >> L;
    for (int i = 0; i < N; i++) cin >> arr[i];

    deque<Node> deq; deq.push_back({ arr[0], 0 });
    cout << arr[0] << " ";
    for (int i = 1; i < N; i++) {
        if (i == deq.front().index + L) 
            deq.pop_front();
        
        while (!deq.empty() && deq.back().num > arr[i])
            deq.pop_back();
        
        deq.push_back({ arr[i], i });
        cout << deq.front().num << " ";
    }
}