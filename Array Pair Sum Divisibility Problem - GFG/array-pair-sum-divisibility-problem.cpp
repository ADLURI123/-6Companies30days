// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> n, int k) 
    {
        int count =0;
        vector <int> a(k,0);
        for(auto&i:n)
        {
            a[i%k]++;
        }
        if(a[0]%2!=0)
        {
            return false;
        }
        for(int i=1;i<a.size();i++)
        {
            if(a[i]!=a[k-i])
            {
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends