#include <iostream>
using namespace std;

int main()
{
    int n, i=0; 
    while (1)
    {
        i++;
        cin >> n;
        
        if (n == 0)
            break;

        n = 3 * n;
        if (n % 2 == 0)
        {
            cout << i << ". even ";
            n = n / 2;
        }
        else if (n % 2 != 0)
        {
            cout << i << ". odd ";
            n = (n + 1) / 2;
        }

        n = 3 * n;

        n = n / 9;
        cout << n << '\n';
    }
}