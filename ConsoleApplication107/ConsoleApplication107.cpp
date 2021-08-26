#include <iostream>
using namespace std;

int d[1001];

int dp(int x)
{
    if (x == 1) return 1; // 1일 때 만들 수 있는 타일의 개수 1
    if (x == 2) return 2; // 2일 때 만들 수 있는 타일의 개수 2
    if (d[x] != 0) return d[x]; // 0이 아닌 숫자가 있으면 그 값으로 리턴
    return d[x] = (dp(x - 1) + dp(x - 2)) % 10007; // 길이가 x일 때의 경우의 수를 구한 적이 없으면
                                                   // 구한 값을 더해줌. %10007인 이유는 값이 커질 수 있는 경우여서
}

int main()
{
    int x;
    cin >> x;
    cout << dp(x);
}