#include <iostream>
using namespace std;

int main()
{
    int array[6];
    int min = 0, sum=0, temp=0;

    for (int i = 0; i < 6; i++)
    {
        
        cin >> array[i];

        if (array[i] < array[i + 1] && i<5)
        {
            array[i] = temp;
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }

    }    
    cout << array[0] + array[1] + array[2];

}