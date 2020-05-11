//link:https://www.codechef.com/LTIME83B/problems/SHUFFLE

//Correct Solution Below

/// Updated code: Corrected Code 100% Passed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < k; i++)
        {
            int l = 0;
            for (int j = i; j < n; j += k)
            {
                b[l++] = a[j];
            }
            sort(b, b + l);
            l = 0;
            for (int j = i; j < n; j += k)
                a[j] = b[l++];
        }
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
