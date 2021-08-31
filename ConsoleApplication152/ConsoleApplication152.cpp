#include <iostream>

int main()
{
    int n, m; // n:세로 길이 m:가로 길이 
    int a = 0, b = 0, num = 0;
    int k; // 관중석 번호 

    scanf("%d %d %d", &n, &m, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (num++ == k)
            {
                printf("%d %d", i, j);
                break;
            }
        }
    }
}