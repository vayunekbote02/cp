// Program to print n terms of fibonacci sequence
#include <bits/stdc++.h>
using namespace std;

void fibonacci(int j){
    int t1=0, t2 = 1;
    int newterm;
    
    for (int i = 0; i <= j; i++){
        cout << t1 << endl;
        newterm = t1 + t2;
        t1 = t2;
        t2 = newterm;
    }
}

int main()
{
    int a;
    cin >> a;
    fibonacci(a);
}