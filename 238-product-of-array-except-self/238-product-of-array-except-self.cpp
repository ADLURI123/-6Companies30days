class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) 
    {
        int n=a.size();
        vector <int> b(n,1),c(n,1);
        for(int i=1;i<n;i++)
        {
            b[i]=b[i-1]*a[i-1];
            c[n-1-i]=c[n-i]*a[n-i];
        }
        for(int i=0;i<n;i++)
        {
            b[i]*=c[i];
        }
        return b;
    }
};