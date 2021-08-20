#include <iostream>
using namespace std;

int main()
{
    int a; 

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    for (int i = 1; i < a; i++)
    {
        for (int j = 0; j < 2*i; j++)
        {
            cout << " ";
        }
        for (int k = i; k < a; k++)
        {
            cout << "# ";
        }
        cout << endl;
    }
}