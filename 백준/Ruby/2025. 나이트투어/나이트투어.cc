#include <iostream>
#include <vector>
#include <random>
#include <chrono>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

struct Position;

int N, length, trying_count;
vector<vector<int>> visited;

random_device rd; mt19937 gen(rd());

struct Position {
    int x, y;

    Position() : x(-1), y(-1){}
    Position(int x, int y) : x(x), y(y) {}

    void print() const { cout << x + 1 << ' ' << y + 1 << "\n"; }
};
inline Position operator+(const Position& p1, const Position& p2) { return Position(p1.x + p2.x, p1.y + p2.y); }

inline bool is_ok(const Position& p) { return (p.x >= 0 && p.y >= 0 && p.x < N && p.y < N && trying_count != visited[p.x][p.y]); }

const Position nightMoves[8] = {
    Position(-1, -2), Position( 1, -2),
    Position(-2, -1), Position( 2, -1),
    Position(-2,  1), Position( 2,  1),
    Position(-1,  2), Position( 1,  2)
};

vector<Position> path;
Position start_position;

inline int cal_degree(const Position& current) {
    int deg = 0;
    for (int d = 0; d < 8; ++d) {
        Position next = current + nightMoves[d];
        if (!is_ok(next)) continue;
        deg++;
    }
    return deg;
}

vector<int> edge_points;
inline int cal_edgePoint(const Position& p) { return edge_points[p.x] + edge_points[p.y]; }

struct Move {
    Position position;
    int degree;
    int edge_point;

    Move() : position(Position()), degree(-1), edge_point(-1){}
    Move(Position p, int d, int ep) : position(p), degree(d), edge_point(ep) {}

    inline bool is_valid() { return edge_point != -1; }
};

Move find_next(const Position& current) {
    vector<Move> best; int mini_degree(2e9), maxi_edge_point(-1);
    for (int d = 0; d < 8; ++d) {
        Position next = current + nightMoves[d];
        if (!is_ok(next)) continue;

        int deg = cal_degree(next);
        int edge_point = cal_edgePoint(next);
        if (deg <= mini_degree) {
            if (deg < mini_degree) {
                best.clear();
                mini_degree = deg;
                maxi_edge_point = edge_point;
                best.push_back(Move(next, deg, edge_point));
            }
            if (deg == mini_degree) {
                if (edge_point >= maxi_edge_point) {
                    if (edge_point > maxi_edge_point) {
                        best.clear();
                        mini_degree = deg;
                        maxi_edge_point = edge_point;
                        best.push_back(Move(next, deg, edge_point));
                    }
                    if (edge_point == maxi_edge_point) {
                        best.push_back(Move(next, deg, edge_point));
                    }
                }
            }
        }
    }

    if (best.empty()) return Move();

    uniform_int_distribution<int> dis(0, best.size() - 1);
    int random = dis(gen);

    return best[random];
}

void init() {
    cin >> N;
    length = N * N;
    trying_count = 0;
    cin >> start_position.x >> start_position.y; start_position.x--, start_position.y--;
    visited.assign(N, vector<int>(N, 0));
    path.clear(); path.reserve(length);

    edge_points.assign(N, 0);
    int len((N & 1) ? N / 2 + 1 : N / 2);
    for (int i = 0; i < len; ++i)
        edge_points[i] = edge_points[N - i - 1] = len - i;
}

bool attempt() {
    path.clear();
    trying_count++;

    Position current = start_position;
    for (int i = 0; i < length; ++i) {
        path.push_back(current);
        visited[current.x][current.y] = trying_count;

        Move next = find_next(current);

        if (i == length - 1) break;
        if (!next.is_valid()) { return false; }
        current = next.position;
    }

    return path.size() == length;
}

void solve() {
    auto start_time = chrono::high_resolution_clock::now();
    int avg(0), sum(0), cnt(0), limit(1000000);
    while (true) {
        if (sum + avg * 1.5 >= limit) break;
        auto start_one = chrono::high_resolution_clock::now();
        bool result = attempt();
        if (result) {
            for (const Position& p : path) p.print();
            return;
        }
        auto end_one = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(end_one - start_one);
        sum += duration.count(); cnt++;
        avg = sum / cnt;
    }
    cout << "-1 -1";
}

int main() {
    Sync;

    init();
    solve();

    return 0;
}
