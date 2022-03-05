class Solution {
public:
    int integerBreak(int n) 
    {
        vector <int> dp(n+1,1);
        for(int i=2;i<n+1;i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                dp[i]=max(dp[i],max(dp[j]*dp[i-j],max(dp[j]*(i-j),max(dp[i-j]*j,(i-j)*j))));
            }
            //cout<<dp[i]<<endl;
        }
        return dp[n];
    }
};