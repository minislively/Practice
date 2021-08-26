#include <iostream>
using namespace std;

int arr[31];

int dp(int a)
{
    if (a == 0) return 1;
    if (a == 1) return 0;
    if (a == 2) return 3;
    if (arr[a] != 0) return arr[a];
    int result = 3 * dp(a - 2); // arr[a] = result + for문의 값 

    for (int i = 3; i <= a; i++) // 예외적으로 만들어진 모형들이 짝수 개씩 늘어날 때마다 2만큼 추가되기 때문. +2
    {
        if (i % 2 == 0)
            result += 2 * dp(a - i); // 짝수일 때의 한에서 계속 2를 곱해주는 것. 
    }
    return arr[a] = result;
}

int main()
{
    int a;

    cin >> a;

    cout << dp(a);
}