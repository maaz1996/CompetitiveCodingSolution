#include <bits/stdc++.h>
using namespace std;

int daysforvaccine(int p1, int v1)
{
    if (p1 % v1 == 0)
    {
        return (p1 / v1);
    }
    else
    {
        return ((p1 / v1) + 1);
    }
}

int main()
{
    int count = 0, days1 = 0, days2 = 0;
    int rem = 0, v = 0;
    // your code goes here
    int d1, v1, d2, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    if (d1 == d2)
    {
        v = v1 + v2;
        days1 = daysforvaccine(p, v);
        days2 = d2 - 1;
    }
    else if (d1 > d2)
    {
        while (d1 != d2 && count < p)
        {
            count += v2;
            d2++;
        }
        days1 = d2 - 1;
        rem = p - count;
        v = v1 + v2;

        days2 = daysforvaccine(rem, v);
    }
    else
    {
        while (d1 != d2 && count < p)
        {
            count += v1;
            d1++;
        }
        days1 = d1 - 1;
        rem = p - count;
        v = v1 + v2;

        days2 = daysforvaccine(rem, v);
    }
    cout << (days1 + days2);
    return 0;
}

//url:https://www.codechef.com/DEC20B/problems/VACCINE1