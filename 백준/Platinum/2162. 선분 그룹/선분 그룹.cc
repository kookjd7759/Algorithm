#include <iostream>
#include <vector>
#include <cstring>

#define ll long long

using namespace std;

struct Line {
	pair<ll, ll> start;
	pair<ll, ll> end;
};

Line line[3001];
vector<int> graph[3001];
bool visited[3001];
int temp_cnt = 0;

void dfs(int x){
	// cout << x << " ";
	visited[x] = true; temp_cnt++;
	for (int i = 0; i < graph[x].size(); i++){
		if (!visited[graph[x][i]]) dfs(graph[x][i]);
	}
}

ll CCW(const pair<ll, ll>* pos1, const pair<ll, ll>* pos2, const pair<ll, ll>* pos3) {
	ll ret = pos1->first * pos2->second + pos2->first * pos3->second + pos3->first * pos1->second;
	ret -= pos2->first * pos1->second + pos3->first * pos2->second + pos1->first * pos3->second;

	if (ret < 0) return -1;
	else if (ret > 0) return 1;
	else return 0;
}

bool check(Line L1, Line L2) {
	ll ch_1 = CCW(&L1.start, &L1.end, &L2.start) * CCW(&L1.start, &L1.end, &L2.end);
	ll ch_2 = CCW(&L2.start, &L2.end, &L1.start) * CCW(&L2.start, &L2.end, &L1.end);

	if (!ch_1 && !ch_2) {
		if (L1.start > L1.end) swap(L1.start, L1.end);
		if (L2.start > L2.end) swap(L2.start, L2.end);
		if (L1.start <= L2.end && L1.end >= L2.start) return 1;
		else return 0;
	}
	else {
		if (ch_1 <= 0 && ch_2 <= 0) return 1;
		else return 0;
	}
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	memset(visited, false, sizeof(visited));
	
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> line[i].start.first >> line[i].start.second;
		cin >> line[i].end.first >> line[i].end.second;
	}
	
	for (int i = 1; i <= n; i++) graph[i].push_back(i);
	
	for (int i = 1; i < n; i++)
		for (int j = i + 1; j <= n; j++)
			if (check(line[i], line[j])) {
				// cout << "CHECK!\n";
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
	
	vector<int> group;
	int max_cnt(0);
	for (int i = 1; i <= n; i++){
		if (!visited[i]) {
			// cout << "start : ";
			temp_cnt = 0;
			dfs(i);
			group.push_back(temp_cnt);
			max_cnt = max(max_cnt, temp_cnt);
		}
	}
	cout << group.size() << "\n" << max_cnt;
}