#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for (int i=0;i<n;i++) cin>>a[i];
	    
	    sort(a, a+n);
	    int sum1=0, sum2=0;
	     int sum1b=0, sum2b=0;
	    for(int i=0;i<n;i++){
	        if(i<k){
	        sum1=sum1+a[i];
	        sum1b=sum1b+a[n-1-i];
	       
	        }
	        else{
	            sum2=sum2+a[i];
	            sum2b=sum2b+a[n-1-i];
	            
	        }
	    }
	   
	    cout<<max(abs(sum2-sum1),abs(sum2b-sum1b))<<endl;
	}
	return 0;
}


//url:https://www.codechef.com/submit/MAXDIFF