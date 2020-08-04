#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n, k;
    cin >> n >> k;
    int a[n + 1] = {0};
    int count = 0;
    while (k--)
    {
        string s;
        cin >> s;
        if (s == "CLOSEALL")
        {
            for (int i = 1; i < n + 1; i++)
                a[i] = 0;
            count = 0;
        }
        else
        {
            int x;
            cin >> x;
            if (a[x] == 0)
            {
                a[x] = 1;
                count++;
            }
            else
            {
                a[x] = 0;
                count--;
            }
        }
        cout << count << endl;
    }
    return 0;
}

//url: https://www.codechef.com/problems/TWTCLOSE