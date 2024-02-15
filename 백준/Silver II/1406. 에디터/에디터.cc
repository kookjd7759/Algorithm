#include <iostream>
#include <string>
#include <list>

using namespace std;

list<int> List;
list<int>::iterator iterCursorPos;

void PrintList() {
	for (const auto& iter : List)
		cout << (char)iter;
}

void Input() {
	string st; cin >> st;

	for (int i = 0; i < st.size(); i++)
		List.push_back((int)st[i]);

	iterCursorPos = List.end();
}

void Function() {
	int Size; cin >> Size;

	while (Size--) {
		char Command; cin >> Command;
		switch (Command) {
			case 'L': {
				if (iterCursorPos != List.begin())
					iterCursorPos--;

				break;
			}
			case 'D': {
				if (iterCursorPos != List.end())
					iterCursorPos++;

				break;
			}
			case 'B': {
				if (iterCursorPos != List.begin()) {
					list<int>::iterator NextCursorPos;
					NextCursorPos = List.erase(--iterCursorPos);
					iterCursorPos = NextCursorPos;
				}

				break;
			}
			case 'P': {
				char Word; cin >> Word;
				List.insert(iterCursorPos, Word);

				break;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	Input();
	Function();
	PrintList();
}