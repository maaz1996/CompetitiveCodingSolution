#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        (x > y) ? cout << x - y << endl : cout << "0" << endl;
    }
    return 0;
}
