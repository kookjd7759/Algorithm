#include <iostream>

using namespace std;

bool Place[52][52]{};
void PlaceReset() {
	for (int i = 1; i < 51; i++)
		for (int j = 1; j < 51; j++)
			Place[i][j] = 0;
}

void Function(int x, int y) {
	Place[y][x] = 0;

	if (Place[y - 1][x] == 1)
		Function(x, y - 1);

	if (Place[y + 1][x] == 1)
		Function(x, y + 1);

	if (Place[y][x - 1] == 1)
		Function(x - 1, y);

	if (Place[y][x + 1] == 1)
		Function(x + 1, y);
}

void Solution() {
	PlaceReset();

	int Horizontal; cin >> Horizontal;
	int vertical; cin >> vertical;
	int Size; cin >> Size;
	int Count = 0;

	while (Size--) {
		int x, y; cin >> x >> y;

		Place[y + 1][x + 1] = true;
	}

	for (int i = 1; i <= vertical; i++)
		for (int j = 1; j <= Horizontal; j++)
			if (Place[i][j]) {
				Count++;
				Function(j, i);
			}

	cout << Count << "\n";
}

int main() {
	int TestCase; cin >> TestCase;

	while (TestCase--)
		Solution();
}