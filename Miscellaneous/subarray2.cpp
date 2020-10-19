#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k;
    cin >> k;

    int count, ans = 0, flag;

    for (int i = 0; i < n;)
    {
        flag = 0;
        count = 0;
        while (a[i] <= k && i < n)
        {
            count++;
            if (a[i] == k)
                flag = 1;

            i++;
        }
        if (flag == 1)
            ans += count;

        while (a[i] > k && i < n)
            i++;
    }
    cout << ans << endl;

    return 0;
}