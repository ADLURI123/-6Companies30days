class Solution {
public:
    bool fun(char a,char b)
    {
        if((a=='1')||(a=='2'&&b<='6'))
        {
            return true;
        }
        return false;
    }
    int numDecodings(string s) 
    {
        if(s[0]=='0')
        {
            return 0;
        }
        if(s.size()==1)
        {
            return 1;
        }
        vector <int> dp(s.size(),1);
        if(fun(s[0],s[1])&&s[1]!='0')
        {
            dp[1]=2;
        }
        else if(fun(s[0],s[1])||s[1]!='0')
        {
            dp[1]=1;
        }
        else
        {
            return 0;
        }
        for(int i=2;i<s.size();i++)
        {
            if(fun(s[i-1],s[i])&&s[i]!='0')
            {
                dp[i]=dp[i-1]+dp[i-2];
            }
            else if(s[i]!='0')
            {
                dp[i]=dp[i-1];
            }
            else if(fun(s[i-1],s[i]))
            {
                dp[i]=dp[i-2];
            }
            else if(s[i]=='0')
            {
                dp[i]=0;
            }
        }
        return dp[s.size()-1];
    }
};