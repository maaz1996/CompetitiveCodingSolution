#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int m, x, y;
        cin >> m >> x >> y;
        int a[m];
        for (int i = 0; i < m; i++)
            cin >> a[i];
        int max, min;
        int b[101] = {0};
        for (int i = 0; i < m; i++)
        {
            min = (a[i] - x * y) < 1 ? 1 : (a[i] - x * y);
            max = (a[i] + x * y) > 100 ? 100 : (a[i] + x * y);
            for (int i = min; i <= max; i++)
            {
                if (b[i] == 0)
                    b[i] = 1;
            }
        }
        for (int i = 1; i <= 100; i++)
        {
            if (b[i] == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

//url:https://www.codechef.com/submit/COPS