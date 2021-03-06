class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        
        m, n = len(obstacleGrid), len(obstacleGrid[0])
        
        dp = [[0  for _ in range(n)] for _ in range(m)]
        
        flag = 1
        for i in range(m):
            if  obstacleGrid[i][0] == 1:
                flag = 0
            dp[i][0] = flag
        
        flag = 1
        for i in range(n):
            if obstacleGrid[0][i] == 1:
                flag = 0
            dp[0][i] = flag
        
        for i in range(1,m):
            for j in range(1,n): 
                dp[i][j] = dp[i-1][j] + dp[i][j-1] if obstacleGrid[i][j] == 0 else 0
        
        return dp[m-1][n-1]