#include <iostream>
using namespace std;

int main()
{
    int a, n=0;

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int k = 1; k < 2*i-1; k++)
        {
            cout << " ";
        }

        for (int j = i; j <= a; j++)
        {
            cout << ++n << " ";
        }
        
        cout << endl;
    }
}