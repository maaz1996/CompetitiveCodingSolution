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
        long max = 0, num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num > max)
            {
                max = num;
            }
        }
        cout << max << endl;
    }
    return 0;
}

//Problem link: https://www.codechef.com/submit/UWCOI20A