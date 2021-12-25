#include<iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    // 약수를 구해야한다. 
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            sum += i;
    }
    cout << sum << '\n';
}