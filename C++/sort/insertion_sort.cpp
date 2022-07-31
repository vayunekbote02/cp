// Insertion sort in C++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (int i = 1; i < n; i++){
        int current = a[i];
        int j = i-1;
        for (j; j>=0; j--){
            if (a[j] > current)
                a[j+1] = a[j];
        }
        a[j+1] = current;
    }
    for (int i = 0; i<n; i++){
        cout << a[i];
    }
    return 0;
    
}