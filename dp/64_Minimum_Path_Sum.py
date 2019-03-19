import copy

class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        
        dp = copy.deepcopy(grid)
        
        for i in range(1,m):
            dp[i][0] = dp[i-1][0] + dp[i][0]

        for j in range(1,n):
            dp[0][j] = dp[0][j] + dp[0][j-1]
        
        for i in range(1,m):
            for j in range(1,n):
                dp[i][j] = dp[i][j] + min(dp[i-1][j], dp[i][j-1])
        return dp[m-1][n-1]
            
