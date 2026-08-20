class Solution {
public:
    void dfs(int i,int j,vector<vector<int>> &grid,int &maxarea,int n,int m,int &area)
    {
        if(i<0 || i>=n || j<0 || j>=m)
        {

            return;
        }
        if(grid[i][j]==0)
        return;
        grid[i][j]=0;
        area++;
        maxarea=max(area,maxarea);
        dfs(i+1,j,grid,maxarea,n,m,area);
        dfs(i,j+1,grid,maxarea,n,m,area);
        dfs(i-1,j,grid,maxarea,n,m,area);
        dfs(i,j-1,grid,maxarea,n,m,area);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxarea=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 int area=0;
                dfs(i,j,grid,maxarea,n,m,area);
                
            }
        }
        return maxarea;
    }
};
