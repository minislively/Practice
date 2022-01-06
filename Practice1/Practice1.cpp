#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 0;
    char s[100] = { 0, };

    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[100] = { 0, };
        int sum = 0, add = 1;
        scanf_s("%s", s);

        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == 'O')
            {
                sum += add;
                add++;
            }
            if (s[j] == 'X')
            {
                add = 1;
            }
        }
        printf_s("%d\n", sum);
    }
}