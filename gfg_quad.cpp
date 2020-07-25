
// C++ program to find missing point
// of a parallelogram
#include <bits/stdc++.h>
using namespace std;

// main method
int main()
{
    int ax = 5, ay = 0; //coordinates of A
    int bx = 1, by = 1; //coordinates of B
    int cx = 2, cy = 5; //coordinates of C
    cout << ax + cx - bx << ", "
         << ay + cy - by;
    return 0;
}