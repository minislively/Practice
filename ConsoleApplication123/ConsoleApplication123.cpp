#include <iostream>

int print(int x, int y, int w, int h);

int main()
{
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);
    int result = printf("%d", print(x, y, w, h));
}

int print(int x, int y, int w, int h)
{
    int min = x;

    if (min > w - x)
        min = w - x;
    if (min > y)
        min = y;
    if (min > h - y)
        min = h - y;
    return min;
}