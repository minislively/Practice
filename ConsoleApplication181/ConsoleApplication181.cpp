#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        d[i] = a[i];
        for (int j = 0; j < i; j++) {
            if (a[j]<a[i] && d[j] + a[i]>d[i])
                d[i] = d[j] + a[i];
        }
    }
    int ans = *max_element(d.begin(), d.end());
    cout << ans << '\n';
    return 0;
}