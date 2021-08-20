#include <iostream>
using namespace std;

int main()
{
    long long s, t, d, t1=0; // s : 기차 속도 t :파리속도 d : 거리 

    cin >> s >> t >> d;

    t1 = d / (s * 2);

    cout << t1 * t;
}