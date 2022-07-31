// Two numbers sum
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    
    int i=0, j=n-1;
    while (i < j){
        if (a[i] + a[j] == target) {
            cout << i << ", " <<j; 
            return 0;
        }
        else if (a[i] + a[j] < target) i++;
        else if (a[i] + a[j] > target) j--;
    }
    cout << -1;
    return 0;
}