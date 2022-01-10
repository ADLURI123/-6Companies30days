class Solution {
public:
    int minDistance(string a, string b) 
    {
        if(a.size()==0||b.size()==0)
        {
            return a.size()+b.size();
        }
        vector <vector <int>> dp(a.size(),vector <int>(b.size(),0));
        bool d=true,c=true;
        if(a[0]!=b[0])
        {
            dp[0][0]=1;
            d=false;
            c=false;
        }
        for(int i=1;i<a.size();i++)
        {
            if(a[i]==b[0]||d)
            {
                dp[i][0]=i;
                d=true;
            }
            else
            {
                dp[i][0]=i+1;
            }
        }
        for(int i=1;i<b.size();i++)
        {
            if(a[0]==b[i]||c)
            {
                dp[0][i]=i;
                c=true;
            }
            else
            {
                dp[0][i]=i+1;
            }
        }
        for(int i=1;i<a.size();i++)
        {
            for(int j=1;j<b.size();j++)
            {
                if(a[i]==b[j])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
            }
        }
        return dp[a.size()-1][b.size()-1];
    }
};