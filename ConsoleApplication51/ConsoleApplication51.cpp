#include <iostream>
using namespace std;

int main()
{
    int a, b; 
    double arr[6] = { 85.6, 79.5, 83.1, 80.0, 78.2,75.0 };
    cin >> a >> b;

    cout << (arr[a - 1] + arr[b - 1]);


}