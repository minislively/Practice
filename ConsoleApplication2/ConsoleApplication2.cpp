#include <iostream>
using namespace std;

int main()
{
    int n, a;
    double sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a; 
    }
    cout << fixed;
    cout.precision(1);
    cout << "avg : " << sum / n << endl;
    if (sum / n >= 80)
        cout << "pass";
    else
        cout << "fail";
}