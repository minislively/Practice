#include <stdio.h>

int print(int a);

int main()
{
    int a;

    scanf("%d", &a);

    int result = printf("%d ", print(a));
}

int print(int a)
{
    int n = 0;
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < a; i++)
        {
            n++;
        }
        printf("\n");
    }
    return n;
}