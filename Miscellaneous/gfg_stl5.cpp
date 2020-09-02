// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

/*Function to sort students with respect to their marks
* v : vector input with student name and their marks
* N : size of vector
* Your need to implement comparator to sort on the basis of marks.
*/

bool comp(pair<string, int> a, pair<string, int> b)
{
    if (a.second > b.second)
        return 1;
    else if (a.second == b.second)
    {
        if (b.first > a.first)
        {
            return 1;
        }
        else
            return 0;
    }
    return 0;
}
vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N)
{

    //Complete the code and return the sorted vector
    sort(v.begin(), v.end(), comp);
    return v;
}

// { Driver Code Starts.

// Driver code
int main()
{

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int N;
        cin >> N;

        // Declaring vector
        vector<pair<string, int>> v;

        // Taking input to vector
        for (int i = 0; i < N; i++)
        {
            string s;
            cin >> s;
            int k;
            cin >> k;
            v.push_back(make_pair(s, k));
        }

        // Calling function
        v = sortMarks(v, N);

        // Printing student name with their marks
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
    }

    return 0;
} // } Driver Code Ends

//https://practice.geeksforgeeks.org/problems/student-of-the-year/1/