#include <iostream>

int print(int a);

int main()
{
    int a;

    scanf("%d", &a);
    printf("%d", print(a));
}

int print(int a)
{
    return 2 << a;
}