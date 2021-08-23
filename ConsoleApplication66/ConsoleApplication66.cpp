#include <iostream>
using namespace std;

int main()
{
    int a;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = i; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}