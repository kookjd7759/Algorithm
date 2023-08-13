#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

struct Node {
    int Num = -1;
    int Index = -1;
};

bool Comp(const Node& A, const Node& B) {
    return A.Index < B.Index;
}

void Func(deque<Node>& de, vector<Node>& vec, Node node) {
    const int index = node.Index;
    bool IsIt = false;

    while (true) {
        if (de.empty()) {
            de.push_back({ node.Num, index });
            break;
        }
        else {
            if (de.front().Num < node.Num) {
                node.Index = de.front().Index;
                vec.push_back(node);
                de.pop_front();
                IsIt = true;
            }
            else if (de.back().Num < node.Num) {
                node.Index = de.back().Index;
                vec.push_back(node);
                de.pop_back();
                IsIt = true;
            }
            else if (de.front().Num >= node.Num && de.back().Num >= node.Num) {
                de.push_back({ node.Num, index });
                break;
            }
        }
    }
}

int main() {
    deque<Node> de; 
    vector<Node> vec;
    Node node;
    int N; cin >> N >> node.Num; node.Index = 0;
    de.push_back(node);

    for (int i = 1; i < N; i++) {
        node.Index = i; cin >> node.Num;
        Func(de, vec, node);
    }

    while (!de.empty()) {
        vec.push_back({ -1, de.front().Index });
        de.pop_front();
    }

    sort(vec.begin(), vec.end(), Comp);

    for (const auto& iter : vec) 
        cout << iter.Num << " ";

    return 0;
}