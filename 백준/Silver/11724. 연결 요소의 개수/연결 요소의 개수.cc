#include <iostream>
#include <vector>

using namespace std;

struct Node {
	bool IsVisited = false;
	vector<int> Link;
};

Node* node;
int NodeSize;
int Count = 0;

void Function(int index) {
	node[index].IsVisited = true;

	for (const auto& iter : node[index].Link)
		if (node[iter].IsVisited == false)
			Function(iter);
}

void Input() {
	int LinkSize; cin >> NodeSize >> LinkSize;
	node = new Node[++NodeSize];

	while (LinkSize--) {
		int Point1, Point2; cin >> Point1 >> Point2;

		node[Point1].Link.push_back(Point2);
		node[Point2].Link.push_back(Point1);
	}

	for (int i = 1; i < NodeSize; i++) {
		if (node[i].IsVisited == false) {
			Count++;
			Function(i);
		}
	}
}

int main() {
	Input();
	cout << Count;
}