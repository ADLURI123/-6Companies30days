class Solution {
public:
    int ladderLength(string a, string b, vector<string>& list) 
    {
        unordered_set <string> s;
        string top,temp;
        for(auto&i:list)
        {
            s.insert(i);
        }
        queue <string> q;
        unordered_map <string,int> dist;
        q.push(a);
        dist[a]=0;
        while(!q.empty())
        {
            top=q.front();
            q.pop();
            temp=top;
            for(int i=0;i<top.size();i++)
            {
                top=temp;
                for(int j=0;j<26;j++)
                {
                    top[i]=char('a'+j);
                    if(s.find(top)!=s.end()&&dist.find(top)==dist.end())
                    {
                        q.push(top);
                        dist[top]=dist[temp]+1;
                        if(top==b)
                        {
                            return dist[top]+1;
                        }
                    }
                    
                }
            }
        }
        return 0;
    }
};