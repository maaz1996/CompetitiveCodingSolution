#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{int sum;
	    int d,n;
	    cin>>d>>n;
	    for(int i=1;i<=d;i++){
	     sum=0;
	    for(int j=1;j<=n;j++)
	    {
	    sum=sum+j;
	    }
	    n=sum;
	    }
	        
	    
	    cout<<n<<endl;
	}
	return 0;
}
