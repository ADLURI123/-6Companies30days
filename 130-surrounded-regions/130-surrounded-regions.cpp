class Solution {
public:
    vector <vector <int>> b={{-1,0},{1,0},{0,-1},{0,1}};
     void bfs(vector<vector<char>>& a,vector <vector <bool> > &visited,int i,int j)
    {
        visited[i][j]=true;
        a[i][j]='#';
        for(auto &k:b)
        {
            if(i+k[0]>=0&&i+k[0]<a.size()&&j+k[1]>=0&&j+k[1]<a[0].size()&&!visited[i+k[0]][j+k[1]]&&a[i+k[0]][j+k[1]]=='O')
            {
                bfs(a,visited,i+k[0],j+k[1]);
            }
        }
        return ;
    }
    void solve(vector<vector<char>>& a) 
    {
        vector <vector <bool>> visited (a.size(),vector <bool> (a[0].size(),false));
        for(int i=0;i<a.size();i++)
        {
            if(!visited[i][0]&&a[i][0]=='O')
            {
                bfs(a,visited,i,0);
            }
            if(!visited[i][a[0].size()-1]&&a[i][a[0].size()-1]=='O')
            {
                bfs(a,visited,i,a[0].size()-1);
            }
        }
        for(int j=0;j<a[0].size();j++)
        {
            if(!visited[0][j]&&a[0][j]=='O')
            {
                bfs(a,visited,0,j);
            }
            if(!visited[a.size()-1][j]&&a[a.size()-1][j]=='O')
            {
                bfs(a,visited,a.size()-1,j);
            }
        }
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[0].size();j++)
            {
                if(a[i][j]=='O')
                {
                    a[i][j]='X';
                }
            }
        }
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[0].size();j++)
            {
                if(a[i][j]=='#')
                {
                    a[i][j]='O';
                }
            }
        }
    }
};