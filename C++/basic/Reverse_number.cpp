// Program to reverse a number in C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, reverse = 0;
    cin >> n;
    while (n > 0){
        int last = n % 10;
        reverse = reverse * 10 + last;
        n /= 10;
    }
    cout << reverse;
    

    return 0;
}