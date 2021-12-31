class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) 
    {
        string s;
        unordered_map <string,vector <string> > b;
        vector <int> a(26,0);
        for(auto &i:str)
        {
            for(int i=0;i<26;i++)
            {
                a[i]=0;
            }
            s="";
            for(auto&j:i)
            {
                a[int(j-'a')]++;
            }
            for(auto&k:a)
            {
                s+="#"+to_string(k);
            }
            b[s].push_back(i);
        }
        vector <vector <string>> res;
        for(auto &i:b)
        {
            res.push_back(i.second);
        }
        return res;
    }
};