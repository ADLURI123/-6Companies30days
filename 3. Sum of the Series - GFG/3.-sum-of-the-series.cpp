// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long gcd(long long a,long long b)
    {
        if(a>b)
        {
            int temp = b;
            b=a;
            a=temp;
        }
        long long rem=b%a;
        while(rem!=0)
        {
            b=a;
            a=rem;
            rem=b%a;
        }
        return a;
    }
    long long calculateSum(int n,int a, int b) 
    {
        long long res=0;
        long long x = a,y=b;
        long long i = n/x;
        res+=x*(i*(i+1))/2;
        i=n/y;
        res+=y*(i*(i+1))/2;
        ;
        long long j = x*y/gcd(x,y);
        i=n/j;
        res-=j*(i*(i+1))/2;
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,A,B;
        cin>>N>>A>>B;
        Solution obj;
        auto ans = obj.calculateSum(N,A,B);
        cout<<ans<<endl;
    }
}   // } Driver Code Ends