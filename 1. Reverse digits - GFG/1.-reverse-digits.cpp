// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int a=0;
		    int res=n%10;
		    while(n>0)
		    {
		        a*=10;
		        a+=res;
		        n=n/10;
		        res=n%10;
		    }
		    
		    return a;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends