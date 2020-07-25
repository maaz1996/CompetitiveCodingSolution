
// C++ program to find missing point
// of a parallelogram
#include <bits/stdc++.h>
using namespace std;

// main method
int main()
{
    int ax, ay; //coordinates of A
    int bx, by; //coordinates of B
    int cx, cy; //coordinates of C

    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    cout << ax + cx - bx << ", "
         << ay + cy - by;
    return 0;
}