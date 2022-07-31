#include <bits/stdc++.h>
using namespace std;

int recordBreaker(int a[], int n){
    int mx=-1, ans=0;
    for (int i=0; i<n; i++){
        if (a[i] > mx && a[i] > a[i+1]) ans++;
        mx = max(a[i], mx);
    }
    return ans;
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i<n; i++) {
        int m;
        cin >> m; 
        int a[m+1];
        a[m] = -1;
        for (int i = 0; i <m; i++){
            cin >> a[i];
        }
        
        cout << recordBreaker(a, m) << endl;
    }
    return 0;
}