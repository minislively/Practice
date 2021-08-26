#include <iostream>
using namespace std;

int main()
{
    int n, a, num1=0, num2=0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
            num1++;
        else if (a == 1)
            num2++;
    }
    if (num1 > num2)
        cout << "Junhee is not cute!";
    else
        cout << "Junhee is cute!";
}