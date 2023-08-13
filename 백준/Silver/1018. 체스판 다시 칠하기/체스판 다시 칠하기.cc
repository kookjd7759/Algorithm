#include <iostream>

using namespace std;

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    bool ground[50][50][2];
    int N, M; cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        string st; cin >> st;
        for (int j = 0; j < M; j++)
            if (st.at(j) == 'W')
                ground[i][j][0] = 0;
            else
                ground[i][j][0] = 1; 
    }

    int min_[2]{};

    for (int i = 0; i < 2; i++) {
        bool bo;

        if (i == 0)
            bo = 1;
        else
            bo = 0;
        
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (ground[j][k][0] != bo)
                    ground[j][k][1] = 1;
                else
                    ground[j][k][1] = 0;
                
                if (bo)
                    bo = 0;
                else
                    bo = 1;
            }

            if (M % 2 == 0)
                if (bo)
                    bo = 0;
                else
                    bo = 1;
        }

        int min = 10000;

        for (int j = 0; j <= N - 8; j++) {
            for (int k = 0; k <= M - 8; k++) {
                int count = 0;
                for (int jj = j; jj < j + 8; jj++) {
                    for (int kk = k; kk < k + 8; kk++) {
                        if (ground[jj][kk][1])
                            count++;
                    }
                }
                if (count < min)
                    min = count;
            }
        }

        min_[i] = min;
    }

    min_[0] <= min_[1] ? cout << min_[0] : cout << min_[1];

    return 0;
}