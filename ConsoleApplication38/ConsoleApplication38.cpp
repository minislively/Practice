#include <iostream>
using namespace std;

int main()
{
    char ch=65;
    int a, n=0;

    cin >> a; 
    
    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= a; j++)
        {
            cout << ch++ << " " ;
        }
        for (int k = 1; k < i; k++)
        {
            cout << n++ << " ";
        }
        cout << endl;
    }
}