#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    int x, y, z;
    scanf("%d : %d : %d", &a, &b, &c);
    scanf("%d : %d : %d", &x, &y, &z);
    int m = x * 3600 + y * 60 + z;
    int n = a * 3600 + b * 60 + c;
    if (n > m) printf("%d", m - n + 3600 * 24);
    else printf("%d", m - n);
}