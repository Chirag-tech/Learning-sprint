//question:Little Elephant and Candies
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        if (c >= sum)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}