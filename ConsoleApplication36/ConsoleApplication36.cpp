#include <iostream>
using namespace std;

int main()
{
    int a; 

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 2*i-1; j < 2*a-1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}