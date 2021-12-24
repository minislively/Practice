#include<iostream>
using namespace std;
int main() {
    int n, x, y, temp = 0, sum = 1;
    int a[3];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x == sum) // 공이 x에 있으면 y와 바꾸기 때문에 y의 값을 대입하면 된다.
            sum = y;
        
        else if (y == sum)
            sum = x;
    }
    cout << sum << '\n';
}