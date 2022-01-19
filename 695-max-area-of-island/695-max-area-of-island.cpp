class Solution {
public:
    vector <vector <int>> b ={{-1,0},{1,0},{0,-1},{0,1}};
    void bfs(vector<vector<int>>& a,vector <vector <bool> > &visited,int i,int j,int &sum)
    {
        sum++;
        visited[i][j]=true;
        for(auto &k:b)
        {
            if(i+k[0]>=0&&i+k[0]<a.size()&&j+k[1]>=0&&j+k[1]<a[0].size()&&!visited[i+k[0]][j+k[1]]&&a[i+k[0]][j+k[1]]==1)
            {
                bfs(a,visited,i+k[0],j+k[1],sum);
            }
        }
        return ;
    }
    int maxAreaOfIsland(vector<vector<int>>& a) 
    {
        vector <vector <bool> > visited(a.size(),vector <bool> (a[0].size(),false));
        int res=0,sum=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[i].size();j++)
            {
                if(!visited[i][j]&&a[i][j]==1)
                {
                    sum=0;
                    bfs(a,visited,i,j,sum);
                    res=max(res,sum);
                }
            }
        }
        return res;
    }
};