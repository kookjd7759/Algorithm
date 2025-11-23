#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define out cout <<
#define in cin >>
#define endl << "\n"

using namespace std;

long long parse_price_to_cents(const string& s) {
    long long whole = 0, frac = 0;
    size_t pos = s.find('.');
    if (pos == string::npos) {
        for (char c : s) whole = whole * 10 + (c - '0');
    } else {
        for (size_t i = 0; i < pos; ++i) whole = whole * 10 + (s[i] - '0');
        string f = s.substr(pos + 1);
        if (f.size() > 2) f = f.substr(0, 2);
        while (f.size() < 2) f.push_back('0');
        for (char c : f) frac = frac * 10 + (c - '0');
    }
    return whole * 100 + frac;
}

long long parse_margin_to_int(const string& s) {
    long long frac = 0;
    size_t pos = s.find('.');
    string f;
    if (pos == string::npos) f = "";
    else f = s.substr(pos + 1);
    if (f.size() > 5) f = f.substr(0, 5);
    while (f.size() < 5) f.push_back('0');
    for (char c : f) frac = frac * 10 + (c - '0');
    return frac;
}

int main() {
    Sync;

    int N;
    string P0s;
    int T;
    in N >> P0s >> T;

    vector<int> S(N), I(N);
    vector<long long> M(N);

    for (int i = 0; i < N; ++i) {
        string Ms;
        in S[i] >> I[i] >> Ms;
        M[i] = parse_margin_to_int(Ms);
    }

    vector<long long> price(N, 0);
    vector<char> has_price(N, 0);
    price[0] = parse_price_to_cents(P0s);
    has_price[0] = 1;

    vector<long long> new_price(N);

    for (int day = 1; day < T; ++day) {
        long long sum = 0;
        int cnt = 0;
        for (int i = 0; i < N; ++i) {
            if (has_price[i]) {
                sum += price[i];
                ++cnt;
            }
        }

        for (int i = 0; i < N; ++i) new_price[i] = -1;

        for (int i = 0; i < N; ++i) {
            if (day >= S[i] && (day - S[i]) % I[i] == 0) {
                long long num = sum * (100000 + M[i]);
                long long den = (long long)cnt * 100000;
                long long p = (num + den / 2) / den;
                new_price[i] = p;
            }
        }

        for (int i = 0; i < N; ++i) {
            if (new_price[i] >= 0) {
                price[i] = new_price[i];
                has_price[i] = 1;
            }
        }
    }

    Fixed(2);
    for (int i = 0; i < N; ++i) {
        out (price[i] / 100.0) << "\n";
    }

    return 0;
}
