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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i] < 0 && a[i + 1] < 0) || (a[i] > 0 && a[i + 1] > 0))
            {
                cout << "1 ";
            }
            else
            {
                while (((a[i] > 0 && a[i + 1] < 0) || (a[i] < 0 && a[i + 1] > 0)) && i < n - 1)
                {
                    count++;
                    i++;
                }
                i--;
                while (count != 1)
                {
                    cout << count << " ";
                    count--;
                }
            }
        }
        cout << "1 " << endl;
    }
    return 0;
}

//url: https://www.codechef.com/problems/ALTARAY