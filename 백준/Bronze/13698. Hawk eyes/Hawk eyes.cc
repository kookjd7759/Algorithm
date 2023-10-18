#include <iostream>

using namespace std;

struct YA {
	int list[5]{ 0,1,2,3,4 };

	void swap(int a, int b) {
		int temp = list[a];
		list[a] = list[b];
		list[b] = temp;
	}

	void A() { swap(1, 2); }
	void B() { swap(1, 3); }
	void C() { swap(1, 4); }
	void D() { swap(2, 3); }
	void E() { swap(2, 4); }
	void F() { swap(3, 4); }

public:
	void move(int n) {
		if (n == 0) A();
		else if (n == 1) B();
		else if (n == 2) C();
		else if (n == 3) D();
		else if (n == 4) E();
		else F();
	}

	void print() {
		int a, b;
		for (int i = 1; i < 5; i++) {
			if (list[i] == 1) a = i;
			else if (list[i] == 4) b = i;
		}
		cout << a << "\n" << b;
	}
};

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	YA ya;
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++) ya.move(st[i] - 65);
	ya.print();
}