// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> a ,int n) 
    {
        int b=0;
        b=(a[n-1]+1)/10;
        a[n-1]=(a[n-1]+1)%10;
        for(int i=n-2;i>=0;i--)
        {
            if(b+a[i]<=9)
            {
                a[i]+=b;
                b=0;
                break;
            }
            else
            {
                b=1;
                a[i]=0;
            }
        }
        if(b==1)
        {
            a.insert(a.begin(),1);
        }
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends