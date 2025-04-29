#include <iostream>
using namespace std;

int main() {
    int F, C, E, B; // 현재 재료량
    cin >> F >> C >> E >> B;

    int Fn, Cn, En, Bn; // 쿠키 하나당 필요한 재료량
    cin >> Fn >> Cn >> En >> Bn;

    int Q;
    cin >> Q;

    int cookie_count = 0;

    while (Q--) {
        int type, i;
        cin >> type >> i;

        if (type == 1) { // 쿠키 i개 만들기
            if (F >= Fn * i && C >= Cn * i && E >= En * i && B >= Bn * i) {
                F -= Fn * i;
                C -= Cn * i;
                E -= En * i;
                B -= Bn * i;
                cookie_count += i;
                cout << cookie_count << "\n";
            }
            else {
                cout << "Hello, siumii\n";
            }
        }
        else if (type == 2) { // 밀가루 추가
            F += i;
            cout << F << "\n";
        }
        else if (type == 3) { // 초콜릿 추가
            C += i;
            cout << C << "\n";
        }
        else if (type == 4) { // 달걀 추가
            E += i;
            cout << E << "\n";
        }
        else if (type == 5) { // 버터 추가
            B += i;
            cout << B << "\n";
        }
    }

    return 0;
}
