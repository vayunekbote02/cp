// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// 7 5 2 4 6 8 1 3

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int curr = 2, pd = a[1] - a[0], ans = 2;
    for (int j = 2; j < n; j++)
    {
        if (pd == abs(a[j] - a[j - 1]))
            curr++;
        else
        {
            pd = abs(a[j] - a[j - 1]);
            curr = 2;
        }
        ans = max(ans, curr);
    }
    cout << ans;
    return 0;
}