#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    
	    for(int j=0;j<n;j++){
	        if(a[j]<=k)
	        {
	            cout<<'1';
	            k=k-a[j];
	        }
	        else
	        {
	            cout<<'0';
	        }
	        
	    }
	    cout<<endl;
	    
	}
	return 0;
}
