#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long t;
    cin >> t;
    while (t--)
    {
        long count = 0;
        long n, k;
        cin >> n >> k;
        long a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);

        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] > b[i + k] && i + k < n)
            {

                //swap(b[i] and b[i+1])
                int temp = b[i];
                b[i] = b[i + k];
                b[i + k] = temp;
            }
        }
        //for(int i=0;i<n;i++)
        //{
        //	cout<<b[i]<<endl;
        //}

        for (int i = 0; i < n; i++)
        {

            if (a[i] != b[i])
            {
                count = 1;
                break;
            }
            else
            {
                count = 0;
            }
        }
        if (count == 1)
        {

            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}

//link:https://www.codechef.com/LTIME83B/problems/SHUFFLE
