#include <iostream>

using namespace std;

int main() {
    int m, s, g, l, r;
    double a, b; 
    cin >> m >> s >> g >> a >> b >> l >> r;
    int ls, rs, lwait, rwait;
    lwait = l / a, rwait = r / b;
    ls = m % g ? m / g + 1 : m / g;
    rs = m % s ? m / s + 1 : m / s;
    if (ls < rs) {
        if (ls + lwait < rs + rwait) cout << "friskus";
        else cout << "latmask";
    }
    else {
        if (ls + lwait < rs + rwait) cout << "friskus";
        else cout << "latmask";
    }
}