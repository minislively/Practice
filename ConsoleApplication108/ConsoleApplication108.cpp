#include <iostream>
using namespace std;

int arr[1000];

int dp(int a)
{
    if (a == 1) return 1;
    if (a == 2) return 3;
    if (arr[a] != 0) return arr[a];
    return arr[a] = (dp(a - 1) + 2 * dp(a - 2)) % 10007;
    // 2*dp(a-2)한 이유는 경우의 수가 2개가 나와서 2x2타일 1개, 2x1 타일 2개 
    // 1x2 타일 수 추가 안 한 이유 : 이미 dp(a-1)에 1가지 경우의 수로 포함했어서
}
int main()
{
    int a; 

    cin >> a; 

    cout << dp(a);
}