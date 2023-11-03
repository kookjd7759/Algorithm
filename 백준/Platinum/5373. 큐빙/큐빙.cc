#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 
#define Roop(x) while(x--) 

using namespace std;

struct Cube {
private:
    enum Dir {
        UP,
        DOWN,
        FRONT,
        BACK,
        LEFT,
        RIGHT
    };
    char surface[6][3][3];

    void basicRotate(Dir dir, const bool& clock) {
        char temp[3][3]; Fori(3) Forj(3) temp[i][j] = surface[dir][i][j];

        if (clock) Fori(3) Forj(3) surface[dir][i][j] = temp[2 - j][i];
        else Fori(3) Forj(3) surface[dir][i][j] = temp[j][2 - i];
    }

    void U(const bool& clock) {
        basicRotate(UP, clock);
        int temp[3]; Fori(3) temp[i] = surface[FRONT][0][i];
        if (clock) {
            Fori(3) surface[FRONT][0][i] = surface[RIGHT][0][i];
            Fori(3) surface[RIGHT][0][i] = surface[BACK][0][i];
            Fori(3) surface[BACK][0][i] = surface[LEFT][0][i];
            Fori(3) surface[LEFT][0][i] = temp[i];
        }
        else {
            Fori(3) surface[FRONT][0][i] = surface[LEFT][0][i];
            Fori(3) surface[LEFT][0][i] = surface[BACK][0][i];
            Fori(3) surface[BACK][0][i] = surface[RIGHT][0][i];
            Fori(3) surface[RIGHT][0][i] = temp[i];
        }
    }

    void D(const bool& clock) {
        basicRotate(DOWN, clock);
        int temp[3]; Fori(3) temp[i] = surface[FRONT][2][i];
        if (clock) {
            Fori(3) surface[FRONT][2][i] = surface[LEFT][2][i];
            Fori(3) surface[LEFT][2][i] = surface[BACK][2][i];
            Fori(3) surface[BACK][2][i] = surface[RIGHT][2][i];
            Fori(3) surface[RIGHT][2][i] = temp[i];
        }
        else {
            Fori(3) surface[FRONT][2][i] = surface[RIGHT][2][i];
            Fori(3) surface[RIGHT][2][i] = surface[BACK][2][i];
            Fori(3) surface[BACK][2][i] = surface[LEFT][2][i];
            Fori(3) surface[LEFT][2][i] = temp[i];
        }
    }

    void F(const bool& clock) {
        basicRotate(FRONT, clock);
        int temp[3]; Fori(3) temp[i] = surface[UP][2][i];
        if (clock) {
            Fori(3) surface[UP][2][i] = surface[LEFT][2 - i][2];
            Fori(3) surface[LEFT][2 - i][2] = surface[DOWN][0][2 - i];
            Fori(3) surface[DOWN][0][2 - i] = surface[RIGHT][i][0];
            Fori(3) surface[RIGHT][i][0] = temp[i];
        }
        else {
            Fori(3) surface[UP][2][i] = surface[RIGHT][i][0];
            Fori(3) surface[RIGHT][i][0] = surface[DOWN][0][2 - i];
            Fori(3) surface[DOWN][0][2 - i] = surface[LEFT][2 - i][2];
            Fori(3) surface[LEFT][2 - i][2] = temp[i];
        }
    }

    void B(const bool& clock) {
        basicRotate(BACK, clock);
        int temp[3]; Fori(3) temp[i] = surface[UP][0][2 - i];
        if (clock) {
            Fori(3) surface[UP][0][2 - i] = surface[RIGHT][2 - i][2];
            Fori(3) surface[RIGHT][2 - i][2] = surface[DOWN][2][i];
            Fori(3) surface[DOWN][2][i] = surface[LEFT][i][0];
            Fori(3) surface[LEFT][i][0] = temp[i];
        }
        else {
            Fori(3) surface[UP][0][2 - i] = surface[LEFT][i][0];
            Fori(3) surface[LEFT][i][0] = surface[DOWN][2][i];
            Fori(3) surface[DOWN][2][i] = surface[RIGHT][2 - i][2];
            Fori(3) surface[RIGHT][2 - i][2] = temp[i];
        }
    }

    void L(const bool& clock) {
        basicRotate(LEFT, clock);
        int temp[3]; Fori(3) temp[i] = surface[UP][i][0];
        if (clock) {
            Fori(3) surface[UP][i][0] = surface[BACK][2 - i][2];
            Fori(3) surface[BACK][2 - i][2] = surface[DOWN][i][0];
            Fori(3) surface[DOWN][i][0] = surface[FRONT][i][0];
            Fori(3) surface[FRONT][i][0] = temp[i];
        }
        else {
            Fori(3) surface[UP][i][0] = surface[FRONT][i][0];
            Fori(3) surface[FRONT][i][0] = surface[DOWN][i][0];
            Fori(3) surface[DOWN][i][0] = surface[BACK][2 - i][2];
            Fori(3) surface[BACK][2 - i][2] = temp[i];
        }
    }

    void R(const bool& clock) {
        basicRotate(RIGHT, clock);
        int temp[3]; Fori(3) temp[i] = surface[UP][2 - i][2];
        if (clock) {
            Fori(3) surface[UP][2 - i][2] = surface[FRONT][2 - i][2];
            Fori(3) surface[FRONT][2 - i][2] = surface[DOWN][2 - i][2];
            Fori(3) surface[DOWN][2 - i][2] = surface[BACK][i][0];
            Fori(3) surface[BACK][i][0] = temp[i];
        }
        else {
            Fori(3) surface[UP][2 - i][2] = surface[BACK][i][0];
            Fori(3) surface[BACK][i][0] = surface[DOWN][2 - i][2];
            Fori(3) surface[DOWN][2 - i][2] = surface[FRONT][2 - i][2];
            Fori(3) surface[FRONT][2 - i][2] = temp[i];
        }
    }
public:
    Cube() {
        char list[6]{ 'w', 'y', 'r', 'o', 'g', 'b' };
        Fori(6) Forj(3) Fork(3) surface[i][j][k] = list[i];
    }
    void rotate(const char& d, const char& c) {
        bool clock = (c == '+' ? true : false);
        if (d == 'U') U(clock);
        else if (d == 'D') D(clock);
        else if (d == 'F') F(clock);
        else if (d == 'B') B(clock);
        else if (d == 'R') R(clock);
        else if (d == 'L') L(clock);
    }
    void print() {
        Fori(3) {
            Forj(3) out surface[UP][i][j];
            ent;
        }
    }

    /*
            UP(w)
    LEFT(g) FRONT(r) RIGHT(b) BACK(o)
            DOWN(y)
    */
};

int main() {
    Sync;

    Testcase{
    Cube cube;
    int n; in n;
    Roop(n) {
        char d, c; in d >> c;
        cube.rotate(d, c);
    }
    cube.print();
    }
}