#include <bits/stdc++.h>
using namespace std;

int main() {    // 1 2 3 6 7 t=16
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    
    int i=0, j=0, sum=0;
    while (j<n && sum+a[j] <= t){
        sum += a[j];
        j++;
    }
    if (sum == t) {cout << i+1 << " " << j; return 0;}
    while (j<n){
        sum += a[j];
        while (sum > t){
            sum -= a[i];
            i++;
        }
        if (sum == t) {cout << i+1 << " " << j+1; return 0;}
        j++;
    }
    return 0;
}