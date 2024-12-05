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
static Dir& operator++(Dir& d) { d = (Dir)(d + 1); return d; }
string dir_to_string[4]{ "UP", "LEFT", "DOWN", "RIGHT" };

int big_w;
int empty_w;
int monotonic_w;
int smoothness_w;
static void init_weight(int value[4]) {
    big_w = value[0];
    empty_w = value[1];
    monotonic_w = value[2];
    smoothness_w = value[3];
}

class Game2048 {
public:
    int MAX_depth = 5;
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

    void move(Dir dir) {
        int dest;
        for (int line = 0; line < 4; ++line) {
            if (dir == LEFT) {
                dest = 0;
                for (int i = 1; i < 4; i++) {
                    if (!board[line][i]) continue;

                    if (!board[line][dest]) board[line][dest] = board[line][i];
                    else {
                        if (board[line][dest] & board[line][i]) {
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
    }
    bool isLegalMove(Dir dir) const {
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
    vector<Dir> getLegalMoves() const {
        vector<Dir> vec;
        for (Dir dir = UP; dir < DIR_NUM; ++dir)
            if (isLegalMove(dir)) vec.push_back(dir);
        return vec;
    }

    int evaluation_big() {
        int sum(0);
        Fori(4) Forj(4) if (board[i][j]) sum += board[i][j] * board[i][j];
        return sum;
    }
    int evaluation_empty() {
        int cnt(0);
        Fori(4) Forj(4) if (!board[i][j]) cnt++;
        return cnt;
    }
    int evaluation_monotonic() {
        int up(0), down(0), left(0), right(0); // decrease direction
        Fori(4) {
            for (int cur = 0; cur < 3; ++cur) {
                if (board[i][cur]) {
                    int next = cur + 1;
                    while (next < 4) {
                        if (board[i][next]) {
                            if (board[i][cur] > board[i][next]) right++;
                            else if (board[i][cur] < board[i][next]) left++;
                            break;
                        }
                        ++next;
                    }
                }

                if (board[cur][i]) {
                    int next = cur + 1;
                    while (next < 4) {
                        if (board[next][i]) {
                            if (board[cur][i] > board[next][i]) down++;
                            else if (board[cur][i] < board[next][i]) up++;
                            break;
                        }
                        ++next;
                    }
                }
            }
        }

        return max(up, down) + max(left, right);
    }
    int evaluation_smoothness() {
        int temp[4][4]; memcpy(temp, board, sizeof(board));
        Fori(4) Forj(4) if (temp[i][j]) temp[i][j] = log2(temp[i][j]);

        int score(0), x, y;
        Fori(4) Forj(4) {
            x = i, y = j + 1;
            if (isSafe(x, y)) score -= abs(temp[i][j] - temp[x][y]);

            x = i + 1, y = j;
            if (isSafe(x, y)) score -= abs(temp[i][j] - temp[x][y]);
        }

        return score;
    }
    int evaluation() {
        int score(0);
        score += evaluation_big() * big_w;
        score += evaluation_empty() * empty_w;
        score += pow(evaluation_monotonic(), monotonic_w);
        score += evaluation_smoothness() * smoothness_w;
        return score;
    }
    int add_block(int depth) {
        int size(0); Fori(4) Forj(4) if (!board[i][j]) size++;

        if (size == 0) return -2e9;
        if (size >= 6 && depth >= 3) return evaluation();
        if (depth >= MAX_depth) return evaluation();

        int score_sum = 0;
        Fori(4) Forj(4) {
            if (!board[i][j]) {
                int temp[4][4]; memcpy(temp, board, sizeof(board));

                board[i][j] = 2;
                score_sum += findBest(depth + 1).second;

                memcpy(board, temp, sizeof(temp));
            }
        }

        return (score_sum / size);
    }
    int search(Dir dir, int depth) {
        int temp[4][4]; memcpy(temp, board, sizeof(board));

        move(dir);
        int score = add_block(depth + 1);

        memcpy(board, temp, sizeof(temp));
        return score;
    }

    pair<Dir, int> findBest(int depth = 0) {
        pair<Dir, int> best{DIR_NULL, -2e9};
        vector<Dir> legalMoves = getLegalMoves();

        if (legalMoves.size() == 0) return best;

        best.first = legalMoves[0];
        best.second = search(legalMoves[0], depth);

        if (legalMoves.size() == 1) return best;

        for (int i = 1; i < legalMoves.size(); ++i) {
            int nextScore = search(legalMoves[i], depth);
            if (best.second < nextScore) {
                best.second = nextScore;
                best.first = legalMoves[i];
            }
        }

        return best;
    }

    void start() {
        while (true) {
            int pos; in pos; pos--;
            if (pos == -2) break;
            board[pos / 4][pos % 4] = 2;
            //print();
            Dir moveDir = findBest().first;
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
                Dir moveDir = findBest().first;
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
    int maxi_value[4]{ 1, 100000, 10000, 3 };
    int maxiScore(0);
    auto print_maxiData = [&]() -> void {
        out "Maxi value    {";
        Fori(4) {
            out maxi_value[i];
            if (i != 3) out ", ";
        }
        out "}\n";
        out "Maxi score : " << maxiScore << "\n";
        };
    print_maxiData();
    int size = 1, weight = 1;
    int idx(0), cnt(0);
    while (true) {
        cnt++;
        Fork(2) {
            int value[4]; memcpy(value, maxi_value, sizeof(maxi_value));
            if (k == 0) value[idx] += weight;
            else value[idx] -= weight;
            init_weight(value);

            out "index : " << idx << ", weight : " << (k == 0 ? weight : -weight) << "\n";
            int sum(0);
            Fori(size) {
                Game2048 game;
                sum += game.selfTest();
            }
            int score = (sum / size);

            //out "\033[31m[score] : " << score << "\033[0m\n";

            if (score > maxiScore) {
                out "MAXI UPDATE !!\n";
                memcpy(maxi_value, value, sizeof(value));
                maxiScore = score;
                print_maxiData();
                cnt = 0;
                weight = 1;
                k = 0;
            }
        }
        idx++; idx %= 12;
        if (cnt == 12) {
            weight++;
            cnt = 0;
        }
    }
}

int value[4]{ 1, 100000, 3, 10000 };
int main() {
    Interactive;


    init_weight(value);
    Game2048 game;
    game.start();

    //learning();

    //Fori(100) {
    //    init_weight(value);
    //    Game2048 game;
    //    out game.selfTest() << "\n";
    //}
}