#include <iostream>
using namespace std;

int main()
{
    int L, A, C, B, D, m=0, l=0;

    cin >> L >> A >> B >> C >> D;

    if (A % C == 0)
        m = A / C;
    else
        m = A / C + 1;

    if (B % D == 0)
        l = B / D;
    else
        l = B / D + 1;
    
    if (m >= l)
        cout << L - m;
    else
        cout << L - l;
}