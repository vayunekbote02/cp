#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, grand_total = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int total = 0;
        for (int j = i; j < n; j++)
        {
            total += a[j];
            cout << total << endl;
        }
        grand_total += total;
    }
    cout << grand_total;
    return 0;
}