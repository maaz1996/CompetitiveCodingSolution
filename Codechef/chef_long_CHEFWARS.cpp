#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while (t--) {
        int h, p;
        cin>>h>>p;
        int count=0;
        while (p!=0) {
            h=h-p;
            p=p/2;
            if (h<=0) {
                count=1;
                break;
            }
        }
        if (count==0) {
            cout<<"0"<<endl;
        }
        else {
            cout<<"1"<<endl;
        }
    }
    return 0;
}

//url: https://www.codechef.com/AUG20B/problems/CHEFWARS