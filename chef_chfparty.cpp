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

        sort(a, a + n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {

                count++;
            }
            else if (count >= a[i])
            {
                count++;
            }
            else if (count < a[i])
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}

//url:https://www.codechef.com/submit/CHFPARTY