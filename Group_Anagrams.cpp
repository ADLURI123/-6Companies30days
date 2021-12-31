class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& st) 
    {
        string s;
        unordered_map <string,vector <string> > b;
        vector <int> a(26,0);
        for(auto &i:st)
        {
            for(auto &l:a)
            {
                l=0;
            }
            s="";
            for(auto&j:i)
            {
                a[int(j-'a')]++;
            }
            for(auto&k:a)
            {
                s=s+"#"+to_string(k);
            }
            if(b.find(s)==b.end())
            {
                b[s]={};
                b[s].push_back(i);
            }
            else
            {
                b[s].push_back(i);
            }
        }
        vector <vector <string>> res;
        for(auto &i:b)
        {
            res.push_back(i.second);
        }
        return res;
    }
};