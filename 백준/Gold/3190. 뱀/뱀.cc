#include <iostream>
#include <array>
#include <string>
#include <deque>
#include <vector>

using namespace std;

enum {
    Nothing,
    Wall,
    Apple,
    Mybody,
    MyHead
};

enum {
    Up,
    Right,
    Down,
    Left
};

struct Cell {
    int type = Nothing;
    int Count = Nothing;
};

struct Moveindex {
    int sec;
    bool IsRIght;
};

Cell Ground[103][103];
deque<Moveindex> Lde{};
int N, K, L, Count = 0, BodySize = 1;
pair<int, int> PresentPos_xy = {1, 1};
int* NowHeadPos_X_ptr = &PresentPos_xy.first;
int* NowHeadPos_Y_ptr = &PresentPos_xy.second;
struct Cell* front;
vector<struct Cell*> vec; 

void GroundReset() {
    for (int i = 0; i < N + 2; i++)
        Ground[0][i].type = Wall;
    for (int i = 0; i < N + 2; i++)
        Ground[N + 1][i].type = Wall;

    for (int i = 1; i < N + 1; i++)
        Ground[i][0].type = Wall;
    for (int i = 1; i < N + 1; i++)
        Ground[i][N + 1].type = Wall;

    Ground[PresentPos_xy.second][PresentPos_xy.first].type = MyHead;
    Ground[PresentPos_xy.second][PresentPos_xy.first].Count = 1;
}

void InPut() {
    cin >> N; GroundReset();

    cin >> K;
    for (int i = 0; i < K; i++) {
        int x, y; cin >> y >> x;
        Ground[y][x].type = Apple;
    }

    cin >> L;
    for (int i = 0; i < L; i++) {
        Moveindex move;
        cin >> move.sec;
        string st; cin >> st;
        if (st == "L")
            move.IsRIght = false;
        else
            move.IsRIght = true;

        Lde.push_back(move);
    }
}

void Move(const int& PrevWay) {
    front->Count = BodySize;
    front->type = MyHead;

    if (PrevWay == Up)
        PresentPos_xy.second--;
    else if (PrevWay == Right)
        PresentPos_xy.first++;
    else if (PrevWay == Down)
        PresentPos_xy.second++;
    else // PrevWay == Left
        PresentPos_xy.first--;

    vec.push_back(&Ground[*NowHeadPos_Y_ptr][*NowHeadPos_X_ptr]);

    for (int i = 0; i < vec.size() - 1; i++) {
        vec.at(i)->Count--;
        if (!vec.at(i)->Count) {
            vec.at(i)->type = Nothing;
            vec.erase(vec.begin() + i); i--;
        }
    }
    vec.at(vec.size() - 1)->type = Mybody;
}

void PtrReset(const int& PrevWay) {
    switch (PrevWay) {
        case Up : front = &Ground[*NowHeadPos_Y_ptr - 1][*NowHeadPos_X_ptr]; break;
        case Right: front = &Ground[*NowHeadPos_Y_ptr][*NowHeadPos_X_ptr + 1]; break;
        case Down: front = &Ground[*NowHeadPos_Y_ptr + 1][*NowHeadPos_X_ptr]; break;
        case Left: front = &Ground[*NowHeadPos_Y_ptr][*NowHeadPos_X_ptr - 1]; break;
        default: break;
    }
}

void Check_L(int& PrevWay) {
    if (!Lde.empty() && Lde.front().sec == Count) {
        if (Lde.front().IsRIght)
            PrevWay++;
        else
            PrevWay--;

        if (PrevWay == 4)
            PrevWay = 0;
        else if (PrevWay == -1)
            PrevWay = 3;

        Lde.pop_front();
    }
}

void Func(int& PrevWay) {
    while (true) {
        Check_L(PrevWay);
        PtrReset(PrevWay);

        if (front->type == Wall)
            return;
        else if (front->type == Mybody) 
            return;
        else {
            if (front->type == Apple) {
                BodySize++;
                for (const auto& iter : vec)
                    iter->Count++;
            }

            Move(PrevWay);
        }

        Count++;
    }
}

int main() {
    int PrevWay = Right;
    vec.push_back(&Ground[*NowHeadPos_Y_ptr][*NowHeadPos_X_ptr]);

    InPut();
    Func(PrevWay);
    cout << ++Count;

    return 0;
}