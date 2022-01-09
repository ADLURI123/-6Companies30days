class Solution {
public:
    int longestCommonSubsequence(string a, string b) 
    {
        vector <vector <int>> dp(a.size(),vector <int> (b.size(),0));
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[0]||(i!=0&&dp[i-1][0]==1))
            {
                dp[i][0]=1;
            }
        }
        for(int i=0;i<b.size();i++)
        {
            if(a[0]==b[i]||(i!=0&&dp[0][i-1]==1))
            {
                dp[0][i]=1;
            }
        }
        for(int i=1;i<a.size();i++)
        {
            for(int j=1;j<b.size();j++)
            {
                if(a[i]==b[j])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[a.size()-1][b.size()-1];
    }
};