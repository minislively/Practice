#include <iostream>
using namespace std;

int main()
{
    int t, num=0;
    int arr[5];

    cin >> t; // t : tea type 
    
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] == t)
            num++;
    }
    cout << num;
}