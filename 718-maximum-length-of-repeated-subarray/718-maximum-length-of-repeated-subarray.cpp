class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) 
    {
        int m=a.size(),n=b.size(),res=0;
        vector <vector <int>>dp(m,vector <int> (n,0));
        for(int i=0;i<m;i++)
        {
            if(a[i]==b[0])
            {
                dp[i][0]=1;
                res=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[0]==b[i])
            {
                dp[0][i]=1;
                res=1;
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    res=max(res,dp[i][j]);
                }
            }
        }
        return res;
    }
};