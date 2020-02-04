#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        long sum1 = a + b;
        long mastersum = 0;
        while (sum1 > 0)
        {
            long sum = sum1 % 10;
            if (sum == 0)
            {
                mastersum = 6 + mastersum;
            }
            else if (sum == 1)
            {
                mastersum = 2 + mastersum;
            }
            else if (sum == 2)
            {
                mastersum = 5 + mastersum;
            }
            else if (sum == 3)
            {
                mastersum = 5 + mastersum;
            }
            else if (sum == 4)
            {
                mastersum = 4 + mastersum;
            }
            else if (sum == 5)
            {
                mastersum = 5 + mastersum;
            }
            else if (sum == 6)
            {
                mastersum = 6 + mastersum;
            }
            else if (sum == 7)
            {
                mastersum = 3 + mastersum;
            }
            else if (sum == 8)
            {
                mastersum = 7 + mastersum;
            }
            else if (sum == 9)
            {
                mastersum = 6 + mastersum;
            }
            sum1 = sum1 / 10;
        }
        cout << mastersum << endl;
    }
    return 0;
}
