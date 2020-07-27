#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long change = 0;
        int count = 0;
        int n5 = 0;
        int nten = 0;
        int n15 = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 5)
            {
                if (a[i] == 10 && change >= 5)
                {
                    if (n5 > 0)
                    {
                        change = change + a[i];
                        change = change - 5;
                        n5--;
                        nten++;
                    }
                    else
                    {
                        count = 1;
                        break;
                    }
                }
                else if (a[i] == 15 && change >= 10)
                {
                    if (nten > 0)
                    {
                        change = change + a[i];
                        change = change - 10;
                        nten--;
                        // n15++;
                    }
                    else if (n5 >= 2)
                    {
                        change = change + a[i];
                        change = change - 10;
                        n5 = n5 - 2;
                    }
                    else if (n5 >= 1 && nten >= 1)
                    {
                        change = change + a[i];
                        change = change - 10;
                        n5--;
                        nten--;
                    }
                    else
                    {
                        count = 1;
                        break;
                    }
                }
                else
                {
                    count = 1;
                    break;
                }
            }
            else
            {
                change = change + a[i];
                n5++;
            }
        }
        //cout<<nten;
        if (count == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}

//url: https://www.codechef.com/JUNE20B/problems/CHFICRM