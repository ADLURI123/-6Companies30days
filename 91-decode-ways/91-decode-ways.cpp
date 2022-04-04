class Solution {
public:
    bool cat(char a,char b)
{
    if(a=='1'||((a=='2')&&(b<='6')))
    {
        return true;
    }
    return false;
}
    int fun(string a)
{
    vector <int> dp(a.size(),0);
    if(a[0]=='0')
    {
        return 0;
    }
    dp[0]=1;
    if(a.size()==1)
    {
        return 1;
    }
    else if(!cat(a[0],a[1])&&a[1]!='0')
    {
        dp[1]=1;
    }
    else if(cat(a[0],a[1])&&a[1]!='0')
    {
        dp[1]=2;
    }
     else if(cat(a[0],a[1])&&a[1]=='0')
    {
        dp[1]=1;
    }   
    else 
    {
        return 0;
    }
    for(int i=2;i<a.size();i++)
    {
        if(a[i]!='0'&&cat(a[i-1],a[i]))
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        else if(a[i]!='0')
        {
            dp[i]=dp[i-1];
        }
        else if(cat(a[i-1],a[i]))    
        {
            dp[i]=dp[i-2];
        }
        else
        {
            return 0;
        }
    }
    return dp[a.size()-1];
}
    int numDecodings(string s) 
    {
        return fun(s);
    }
};