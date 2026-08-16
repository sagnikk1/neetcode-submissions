class Solution {
public:
    int helper(int x,int y,int m,int n,vector<vector<int>> &dp)
    {
        if(x==0 && y==0 )
        return 1;
        if(x<0 || y<0 || x>=m || y>=n)
        return 0;
        if(dp[x][y]!=-1)
        return dp[x][y];
        return dp[x][y]=helper(x,y-1,m,n,dp)+helper(x-1,y,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return helper(m-1,n-1,m,n,dp);
    }
};
