class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& word) 
    {
        string a;
        unordered_set <string> dict;
        for(auto&i:word)
        {
            dict.insert(i);
        }
        vector < vector <string>> dp(s.size());
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j>=0;j--)
            {
                a=s.substr(j,i-j+1);
                if((j==0||dp[j-1].size()!=0)&&dict.find(a)!=dict.end())
                {
                    if(j==0)
                    {
                        dp[i].push_back(a);
                    }
                    else
                    {
                        for(auto&k:dp[j-1])
                        {
                            dp[i].push_back(k+" "+a);
                        }
                    }
                }
            }
        }
        return dp[s.size()-1];
    }
};