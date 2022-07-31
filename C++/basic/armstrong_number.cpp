#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total = 0, a;
    cin >> n;
    a = n;
    while (n > 0)
    {
        int last = n % 10;
        total += pow(last, 3);
        n /= 10;
    }
    if (a == total)
    {
        cout << a << " "
             << "is an armstrong number.";
    }
    else
    {
        cout << a << " "
             << "is not an armstrong number.";
    }
    return 0;
}