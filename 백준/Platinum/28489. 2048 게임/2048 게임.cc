#include <bits/stdc++.h>
#include <random>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
// #define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)
#define nonecountingTC int tc; in tc; while(tc--) 
#define countingTC int tc; in tc; for (int TCcounter = 1; TCcounter <= tc; TCcounter++) 

using namespace std;

enum Dir {
    UP, LEFT, DOWN, RIGHT, DIR_NUM, DIR_NULL
};
Dir& operator++(Dir& d) { d = (Dir)(d + 1); return d; }
string dir_to_string[4]{ "UP", "LEFT", "DOWN", "RIGHT" };

int mono_weight;
int monoMinus;
int monoPlus;
int board_weight[4][4];
int count_weight;
int maxi_weight;
void init_weight(int value[12]) {
    mono_weight = value[0];
    monoMinus = value[1];
    monoPlus = value[2];

    board_weight[0][0] = value[3];

    board_weight[1][0] = value[4];
    board_weight[0][1] = value[4];

    board_weight[2][0] = value[5];
    board_weight[2][2] = value[5];
    board_weight[0][2] = value[5];

    board_weight[3][0] = value[6];
    board_weight[2][1] = value[6];
    board_weight[1][2] = value[6];
    board_weight[0][3] = value[6];

    board_weight[1][2] = value[7];
    board_weight[2][2] = value[7];
    board_weight[2][1] = value[7];

    board_weight[2][3] = value[8];
    board_weight[3][2] = value[8];

    board_weight[3][3] = value[9];

    count_weight = value[10];
    maxi_weight = value[11];
}

struct MoveData {
    int cnt = 0, maxi = 0;
    Dir dir;
    MoveData() : dir(DIR_NULL) {}
    MoveData(Dir d) : dir(d) {}
    void update(int n) { cnt++; maxi = max(maxi, n); }
};
bool MoveDataComp(const MoveData& a, const MoveData& b) {
    if (a.maxi == b.maxi) return a.cnt > b.cnt;
    else return a.maxi > b.maxi;
}

class Game2048 {
public:
    int board[4][4];
    void print() const {
        out "┌───────────\n";
        Fori(4) {
            out "│";
            Forj(4) out board[i][j] << ' ';
            ent;
        }
        out "└───────────\n";
    }
    void init() { Fori(4) Forj(4) board[i][j] = 0; }
    bool isSafe(int x, int y) const { return (x >= 0 && x < 4 && y >= 0 && y < 4); }

    Game2048() { init(); }

    MoveData move(Dir dir) {
        MoveData moveData(dir);
        int dest;
        for (int line = 0; line < 4; ++line) {
            if (dir == LEFT) {
                dest = 0;
                for (int i = 1; i < 4; i++) {
                    if (!board[line][i]) continue;

                    if (!board[line][dest]) board[line][dest] = board[line][i];
                    else {
                        if (board[line][dest] & board[line][i]) {
                            moveData.update(board[line][dest]);
                            board[line][dest] <<= 1;
                            dest++;
                        }
                        else {
                            dest++;
                            if (dest == i) continue;
                            board[line][dest] = board[line][i];
                        }
                    }
                    board[line][i] = 0;
                }
            }
            else if (dir == RIGHT) {
                dest = 3;
                for (int i = 2; i >= 0; i--) {
                    if (!board[line][i]) continue;

                    if (!board[line][dest]) board[line][dest] = board[line][i];
                    else {
                        if (board[line][dest] & board[line][i]) {
                            moveData.update(board[line][dest]);
                            board[line][dest] <<= 1;
                            dest--;
                        }
                        else {
                            dest--;
                            if (dest == i) continue;
                            board[line][dest] = board[line][i];
                        }
                    }
                    board[line][i] = 0;
                }
            }
            else if (dir == UP) {
                dest = 0;
                for (int i = 1; i < 4; i++) {
                    if (!board[i][line]) continue;

                    if (!board[dest][line]) board[dest][line] = board[i][line];
                    else {
                        if (board[dest][line] & board[i][line]) {
                            moveData.update(board[dest][line]);
                            board[dest][line] <<= 1;
                            dest++;
                        }
                        else {
                            dest++;
                            if (dest == i) continue;
                            board[dest][line] = board[i][line];
                        }
                    }
                    board[i][line] = 0;
                }
            }
            else {
                dest = 3;
                for (int i = 2; i >= 0; i--) {
                    if (!board[i][line]) continue;

                    if (!board[dest][line]) board[dest][line] = board[i][line];
                    else {
                        if (board[dest][line] & board[i][line]) {
                            moveData.update(board[dest][line]);
                            board[dest][line] <<= 1;
                            dest--;
                        }
                        else {
                            dest--;
                            if (dest == i) continue;
                            board[dest][line] = board[i][line];
                        }
                    }
                    board[i][line] = 0;
                }
            }
        }
        return moveData;
    }
    bool isLegalMove(Dir dir) {
        if (dir == LEFT) {
            Fori(4) {
                for (int j = 0; j < 3; ++j) {
                    if ((!board[i][j] && board[i][j + 1]) ||
                        (board[i][j] & board[i][j + 1])) return true;
                }
            }
        }
        else if (dir == RIGHT) {
            Fori(4) {
                for (int j = 3; j > 0; --j) {
                    if ((!board[i][j] && board[i][j - 1]) ||
                        (board[i][j] & board[i][j - 1])) return true;
                }
            }
        }
        else if (dir == UP) {
            Fori(4) {
                for (int j = 0; j < 3; ++j) {
                    if ((!board[j][i] && board[j + 1][i]) ||
                        (board[j][i] & board[j + 1][i])) return true;
                }
            }
        }
        else {
            Fori(4) {
                for (int j = 3; j > 0; --j) {
                    if ((!board[j][i] && board[j - 1][i]) ||
                        (board[j][i] & board[j - 1][i])) return true;
                }
            }
        }
        return false;
    }
    vector<Dir> getLegalMoves() {
        vector<Dir> vec;
        for (Dir dir = UP; dir < DIR_NUM; ++dir)
            if (isLegalMove(dir)) vec.push_back(dir);
        return vec;
    }

    int board_score() {
        int score(0);
        Fori(4) Forj(4) score += board[i][j] * board_weight[i][j];
        return score;
    }
    int BitDiff(int a, int b) {
        int cnt(0);
        while (a != b) {
            cnt++; b <<= 1;
        }
        return cnt;
    }
    int monotonic_score() {
        int score(0);
        auto cal = [&](int i, int j, int x, int y) {
            if (isSafe(x, y) && board[x][y]) {
                if (board[i][j] < board[x][y]) score -= monoMinus;
                else score += monoPlus - BitDiff(board[i][j], board[x][y]);
            }
            };

        Fori(4) Forj(4) {
            if (!board[i][j]) continue;
            cal(i, j, i + 1, j);
            cal(i, j, i, j + 1);
        }

        score *= mono_weight;

        return score;
    }
    int evaluation(MoveData moveData) {
        int score(0);
        score += monotonic_score();
        score += board_score();
        score += moveData.cnt * count_weight;
        score += (moveData.maxi == 0 ? 0 : log2(moveData.maxi)) * maxi_weight;
        return score;
    }
    int search(Dir dir) {
        int temp[4][4]; memcpy(temp, board, sizeof(board));

        MoveData moveData = move(dir);
        int score = evaluation(moveData);

        memcpy(board, temp, sizeof(temp));
        return score;
    }

    Dir findBestMove() {
        vector<Dir> legalMoves = getLegalMoves();
        if (legalMoves.size() == 0) return DIR_NULL;
        else if (legalMoves.size() == 1) return legalMoves[0];

        Dir bestMove = legalMoves[0];
        int bestScore = search(legalMoves[0]);
        for (int i = 1; i < legalMoves.size(); ++i) {
            int nextScore = search(legalMoves[i]);
            if (bestScore < nextScore) {
                bestScore = nextScore;
                bestMove = legalMoves[i];
            }
        }

        return bestMove;
    }

    void start() {
        while (true) {
            int pos; in pos; pos--;
            if (pos == -2) break;
            board[pos / 4][pos % 4] = 2;
            //print();
            Dir moveDir = findBestMove();
            move(moveDir);
            out dir_to_string[moveDir] << endl;
            //print();
        }
    }

    int selfTest() {
        int sum(0);
        Fori(16) {
            init();
            while (true) {
                int pos = testProgram(); pos--;
                if (pos == -2) break;
                board[pos / 4][pos % 4] = 2;
                //print();
                Dir moveDir = findBestMove();
                move(moveDir);
                //print();
            }
            int score(0);
            Fori(4) Forj(4) score = max(score, board[i][j]);
            sum += score;
            //out "score : " << score << "\n";
        }
        //out "average :" spc(sum / 16) << "\n";
        return (sum / 16);
    }
    int testProgram() {
        int size(0);
        Fori(4) Forj(4) if (!board[i][j]) size++;

        random_device rd; mt19937 gen(rd());
        uniform_int_distribution<> dis(1, size);
        int cnt(0), rand(dis(gen)), pos;
        Fori(4) {
            bool flag = false;
            Forj(4) {
                if (!board[i][j]) cnt++;
                if (cnt == rand) {
                    pos = (i * 4 + j + 1);
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }

        if (size == 1) {
            int temp[4][4]; memcpy(temp, board, sizeof(board));

            board[(pos - 1) / 4][(pos - 1) % 4] = 2;
            vector<Dir> legalMoves = getLegalMoves();
            if (!legalMoves.size()) pos = -1;

            memcpy(board, temp, sizeof(temp));
        }

        return pos;
    }
};

void learning() {
    int maxi_value[12]{ 35, 4, 1, 10, 5, 4, 3, 3, 2, 0, 1, 1 };
    int size = 40, maxiScore(800);
    int idx(0), cnt(0);
    while (true) {
        if (cnt == 12) break;
        int value[12]; memcpy(value, maxi_value, sizeof(maxi_value));
        value[idx] += 100;
        init_weight(value);
        out "current value [";
        Fori(12) {
            out value[i];
            if (i != 11) out ", ";
        }
        out "]\n";
        out "Maxi value    {";
        Fori(12) {
            out maxi_value[i];
            if (i != 11) out ", ";
        }
        out "}\n";
        out "Maxi score : " << maxiScore << "\n";

        int sum(0);
        Fori(size) {
            Game2048 game;
            sum += game.selfTest();
        }
        int score = (sum / size);
        out "\033[31m[score] : " << score << "\033[0m\n";

        if (score > maxiScore) {
            memcpy(maxi_value, value, sizeof(value));
            maxiScore = score;
            cnt = 0;
        }
        else {
            idx++; idx %= 12;
            cnt++;
        }
    }
}

int main() {
    Interactive;

    
    int value[12]{ 35, 4, 1, 10, 5, 4, 3, 3, 2, 0, 1, 1 };
    init_weight(value);
    Game2048 game;
    game.start();
    


    //Fori(100) {
    //    int value[12]{ 1, 1, 1, 6, 5, 4, 3, 2, 1, 0, 1, 1 };
    //    init_weight(value);
    //    Game2048 game;
    //    out game.selfTest() << "\n";
    //}
}