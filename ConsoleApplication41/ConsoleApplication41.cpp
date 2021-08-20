#include <iostream>
using namespace std;

int main()
{
    int array[4];
    int temp=0;

    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }
  
    for (int i = 0; i < 4; i++)
    {
       
        for (int j = i+1; j < 4; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    if (array[0] + array[3] < array[1] + array[2])
        cout << -(array[0] + array[3] - (array[1] + array[2]));
    else 
        cout << (array[0] + array[3] - (array[1] + array[2]));

}