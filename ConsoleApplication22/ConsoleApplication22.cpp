#include <iostream>
using namespace std;

int main()
{
    int a = 0;

    cin >> a;
     
    for (int i = 1; i <= a; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            cout << " ";
        }
        for (int j = a; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl; 
       
    }
}