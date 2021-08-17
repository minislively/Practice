#include <iostream>
using namespace std;

int main()
{
    int n = 0, sum=0, N=0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
            N++;
        }
        if (sum >= n)
        {

            break;
        }
       
    }
    cout << N  << " " << sum;
}