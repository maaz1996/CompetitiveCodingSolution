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
        string a[n], b[n];
        int c[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c[i] = 1;
                    c[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (c[i] == 1)
            {
                cout << a[i] << " " << b[i] << endl;
            }
            else
            {
                cout << a[i] << endl;
            }
        }
    }
    return 0;
}

//link: https://www.codechef.com/submit/ATTND