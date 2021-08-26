#include <iostream>
using namespace std;

int arr[10000];

int print(int a)
{
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;
    if (arr[a] != 0) return arr[a];
    return arr[a] = print(a - 1) + print(a - 2);
}
int main()
{
    int a;

    cin >> a;

    int result = print(a);
}