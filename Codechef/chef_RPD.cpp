#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        long long int max = 0;
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long int sum = 0;
                long long int prod = a[i] * a[j];

                while (prod != 0)
                {

                    int rem = prod % 10;
                    sum = sum + rem;
                    prod = prod / 10;
                }
                if (sum > max)
                {
                    max = sum;
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}

//url: https://www.codechef.com/problems/RPD