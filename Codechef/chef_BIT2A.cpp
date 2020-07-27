#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    count++;
                }
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}

//url:https://www.codechef.com/problems/BIT2As