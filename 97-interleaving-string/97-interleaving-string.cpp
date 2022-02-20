class Solution {
public:
    bool isInterleave(string a, string b, string c) 
    {
        vector <vector <bool>> dp(a.size()+1,vector <bool> (b.size()+1,false));
        if(a.size()+b.size()!=c.size())
        {
            return false;
        }
        dp[0][0]=true;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==c[i])
            {
                dp[i+1][0]=dp[i][0];
            }
        }
        for(int i=0;i<b.size();i++)
        {
            if(b[i]==c[i])
            {
                dp[0][i+1]=dp[0][i];
            }
        }
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(c[i+j+1]==a[i]&&dp[i][j+1])
                {
                    dp[i+1][j+1]=true;
                }
                else if(c[i+j+1]==b[j]&&dp[i+1][j])
                {
                    dp[i+1][j+1]=true;
                }
            }
        }
        return dp[a.size()][b.size()];
    }
};