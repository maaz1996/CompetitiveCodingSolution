#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int right = 2 * n;
        long long int left = (n * (n - 1)) / 2;

        long long int sum = left + right;

        cout << sum << endl;
    }
    return 0;
}

//url: https://www.codechef.com/problems/ANUWTA