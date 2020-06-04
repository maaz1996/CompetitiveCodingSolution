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
        int freq[1001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int unq[1001] = {0};
        int flag = 0;
        for (int i = 0; i < 1001; i++)
        {
            if (freq[i] > 0)
            {
                unq[freq[i]]++;
            }
        }
        for (int i : unq)
        {
            if (i > 1)
            {
                flag = 1;
                break;
            }
        }
        //cout<<flag;
        if (flag == 1)
        {
            cout << "NO\n";
        }
        else
        {
            int visited[1001] = {0};
            visited[arr[0]] = 1;
            int i = 0;
            for (i = 1; i < n; i++)
            {
                if (arr[i - 1] == arr[i])
                    continue;
                if (visited[arr[i]] == 1)
                    break;

                visited[arr[i]] = 1;
            }
            // cout<<i;
            if (i == n)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
//url:https://www.codechef.com/problems/CHEFRECP