#include <iostream>

int main()
{
    int t = 0, l = 5;

    scanf("%d", &t);

    if (t % l != 0)
        printf("%d", t / l + 1);
    else
        printf("%d", t / l);
}