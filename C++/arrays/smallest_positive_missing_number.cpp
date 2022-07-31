#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    cin >> n; //size of array input
    int a[n]; //creating array
    for (int i=0;i<n;i++) cin >> a[i]; //taking array inputs
    
    const int N = 1e6 + 2;
    bool idx[N]; //creating check array
    
    for (int i=0;i<N;i++) idx[i] = false; //turning all check array elements to 0
    
    for (int i=0; i<n; i++){
        if (a[i] > 0) idx[a[i]]=true;
    }
    
    for (int i=1; i<N; i++){
        if (idx[i] == false) {cout << i; return 0;}
    }
    return -1;
}