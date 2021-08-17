#include <iostream>
using namespace std;

int main()
{
    int a, n=0; 
    char ch(65);

    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= a; j++)
        {
            cout << j  << " ";
        }
   
        for (int k = 1; k<=i ; k++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}