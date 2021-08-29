#include <iostream>

int main()
{
    char ch[50];

	scanf("%s", ch);

	for (int i = 0; i < 50; i++)
	{
		printf("\'%c\'\n", ch[i]);
	}
}