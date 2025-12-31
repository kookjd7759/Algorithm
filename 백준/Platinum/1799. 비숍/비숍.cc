#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int N, MASK;
vector<int> Bitboard, Bitboard_ori;
vector<vector<vector<int>>> BishopMoves;

void printBoard(const vector<int>& board) {
	cout << "[Bitboard]\n";
	for (int i = 0; i < N; ++i) {
		int mask(1);
		for (int j = 0; j < N; ++j) {
			cout << (bool)(mask & board[i]) << ' ';
			mask <<= 1;
		}
		cout << "\n";
	}
	cout << "\n";
}

void init() {
	// input
	cin >> N;
	MASK = 0;
	for (int i = 0; i < N; ++i) MASK |= (1 << i);
	Bitboard.resize(N); Bitboard_ori.resize(N);
	BishopMoves.resize(N, vector<vector<int>>(N, vector<int>(N)));
	for (int i = 0; i < N; ++i) {
		int line(0);
		for (int j = 0; j < N; ++j) {
			char c; cin >> c;
			if (c == '1') line |= (1 << j);
		}
		Bitboard[i] = Bitboard_ori[i] = (~line & MASK);
	}

	// calculate color
	for (int i = 0; i < N; ++i) {
		bool isWhite = !(i & 1);
		int line_w(0), line_b(0);
		for (int j = 0; j < N; ++j) {
			int mask = (1 << j);
			isWhite ? line_w |= mask : line_b |= mask;
			isWhite = !isWhite;
		}
	}

	// make bishop moves
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			int current(1 << j);
			BishopMoves[i][j][i] = current;
			// up
			for (int k = i - 1; k >= 0; --k) {
				int shift(i - k);
				BishopMoves[i][j][k] = (current << shift) | (current >> shift);
			}

			// down
			for (int k = i + 1; k < N; ++k) {
				int shift(k - i);
				BishopMoves[i][j][k] = (current << shift) | (current >> shift);
			}

			// boundary masking
			for (int k = 0; k < N; ++k)
				BishopMoves[i][j][k] &= MASK;
		}
	}
}

int black(0), white(0);
void dfs_white(int depth) {
	white = max(white, depth);
	for (int i = 0; i < N; ++i) {
		int start = ((i & 1) ? 1 : 0);
		int mask(1 << start);
		for (int j = start; j < N; j += 2) {
			if (!(mask & Bitboard[i])) {
				auto saved = Bitboard;
				// masking the bishop moves
				for (int k = 0; k < N; ++k)
					Bitboard[k] |= BishopMoves[i][j][k];

				dfs_white(depth + 1);

				// un-masking the bishop moves
				Bitboard = move(saved);
				Bitboard[i] |= mask;
			}
			mask <<= 2;
		}
	}
}

void dfs_black(int depth) {
	black = max(black, depth);
	for (int i = 0; i < N; ++i) {
		int start = ((i & 1) ? 0 : 1);
		int mask(1 << start);
		for (int j = start; j < N; j += 2) {
			if (!(mask & Bitboard[i])) {
				auto saved = Bitboard;
				// masking the bishop moves
				for (int k = 0; k < N; ++k)
					Bitboard[k] |= BishopMoves[i][j][k];

				dfs_black(depth + 1);

				// un-masking the bishop moves
				Bitboard = move(saved);
				Bitboard[i] |= mask;
			}
			mask <<= 2;
		}
	}
}


int main() {
	Sync;

	init();

	dfs_white(0);
	Bitboard = Bitboard_ori;
	dfs_black(0);
	cout << white + black;

	return 0;
}
