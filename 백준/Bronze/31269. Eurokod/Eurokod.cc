#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
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

using namespace std;

int main() {
    Sync;

    int n; in n;
    vector<pair<int, int>> score(n, { 0,0 });
    Fori(n) score[i].second = i;
    Fori(n) {
        int label; in label;
        int point = n - i;
        score[label - 1].first += point;
    }
    int* ori_vote = new int[n]; 
    Fori(n) in ori_vote[i];

    vector<pair<int, int>> vote_vec(n);
    Fori(n) vote_vec[i].first = ori_vote[i], vote_vec[i].second = i;
    sort(vote_vec.begin(), vote_vec.end(), greater<>());
    Fori(n) score[vote_vec[i].second].first += n - i;

    sort(score.begin(), score.end(), [&](pair<int, int>& a, pair<int, int>& b) {
        if (a.first == b.first) 
            return ori_vote[a.second] > ori_vote[b.second];
        return a.first > b.first;
        });

    Fori(n) {
        out i + 1 << ". Kod"; 
        if (score[i].second + 1 < 10) out '0';
        out score[i].second + 1;
        out " (" << score[i].first << ")\n";
    }
}