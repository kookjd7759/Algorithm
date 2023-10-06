#include <iostream>
#include <cstring>
#include <vector>

#define INF 2e9
#define SIZE 16

using namespace std;

int N;
int graph[SIZE][SIZE];
int DP[SIZE][1 << SIZE];

int TSP(int visited, int now){
	visited |= (1 << now);
	
	if (visited == (1 << N) - 1) {
		if (graph[now][0]) return graph[now][0];
		return INF;
	}
	
	int& ret = DP[now][visited];
	if (DP[now][visited] > 0) return ret;
	
	ret = INF;
	for (int i = 0; i < N; i++){
		if (i != now && (visited & (1 << i)) == 0 && graph[now][i]){
			int temp = TSP(visited, i) + graph[now][i];
			if (ret > temp) ret = temp;
		}
	}
	return ret;
}

int main(void){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(DP, -1, sizeof(DP));

	cin >> N;
	for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) 
		cin >> graph[i][j];
	
	cout << TSP(0, 0);
}