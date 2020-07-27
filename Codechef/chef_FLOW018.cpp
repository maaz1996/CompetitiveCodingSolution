#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int result = fact(n);
        cout << result << endl;
    }
    return 0;
}

//url:https://www.codechef.com/problems/FLOW018