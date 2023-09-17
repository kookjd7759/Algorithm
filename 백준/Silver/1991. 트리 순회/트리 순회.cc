#include <iostream>
#include <vector>

using namespace std;

typedef struct Node* n_ptr;
typedef struct Node {
	char data;
	n_ptr left, right;
};

void preorder(n_ptr ptr) {
	if (ptr != nullptr) {
		cout << ptr->data;
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void inorder(n_ptr ptr) {
	if (ptr != nullptr) {
		inorder(ptr->left);
		cout << ptr->data;
		inorder(ptr->right);
	}
}

void postorder(n_ptr ptr) {
	if (ptr != nullptr) {
		postorder(ptr->left);
		postorder(ptr->right);
		cout << ptr->data;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	vector<Node> vec(n + 1);

	for (int i = 0; i < n; i++) {
		char Me, L, R; cin >> Me >> L >> R;
		vec[Me - 'A'].data = Me;
		L == '.' ? vec[Me - 'A'].left = nullptr : vec[Me - 'A'].left = &vec[L - 'A'];
		R == '.' ? vec[Me - 'A'].right = nullptr : vec[Me - 'A'].right = &vec[R - 'A'];
	}

	preorder(&vec[0]); cout << "\n";
	inorder(&vec[0]); cout << "\n";
	postorder(&vec[0]);
}