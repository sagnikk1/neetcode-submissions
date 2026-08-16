class Solution {
public:
    // int helper(int x,int y,int m,int n,vector<vector<int>> &dp)
    // {
    //     if(x==0 && y==0 )
    //     return 1;
    //     if(x<0 || y<0 || x>=m || y>=n)
    //     return 0;
    //     if(dp[x][y]!=-1)
    //     return dp[x][y];
    //     return dp[x][y]=helper(x,y-1,m,n,dp)+helper(x-1,y,m,n,dp);
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,0));
        dp[0][0]=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 & j==0)
                continue;
                int left=0;
                int up=0;
                if(i>0)
                up=dp[i-1][j];
                if(j>0)
                 left=dp[i][j-1];
                dp[i][j]=up+left;
            }
        }
        return dp[m-1][n-1];
    }
};
