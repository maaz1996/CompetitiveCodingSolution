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
        long long chef = 0, mor = 0;
        for (int i = 0; i < n; i++)
        {
            long long a, b;
            cin >> a >> b;
            long long sumA = 0, sumB = 0;
            while (a != 0)
            {
                sumA = sumA + a % 10;
                a = a / 10;
            }
            while (b != 0)
            {
                sumB = sumB + b % 10;
                b = b / 10;
            }

            if (sumA > sumB)
            {
                chef++;
            }
            else if (sumB > sumA)
            {
                mor++;
            }
            else if (sumA == sumB)
            {
                chef++;
                mor++;
            }
        }
        if (chef > mor)
        {
            cout << "0"
                 << " " << chef << endl;
        }
        if (chef < mor)
        {
            cout << "1"
                 << " " << mor << endl;
        }
        if (chef == mor)
        {
            cout << "2"
                 << " " << chef << endl;
        }
    }
    return 0;
}

//url: https://www.codechef.com/JULY20B/problems/CRDGAME