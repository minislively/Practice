#include<iostream>
using namespace std;
int main(){
    double h, b, c, s;
    cin >> h >> b >> c >> s;
    cout << fixed;
    cout.precision(1);
    cout << (h * b * c * s) / (8*1024*1024) << " MB";
}