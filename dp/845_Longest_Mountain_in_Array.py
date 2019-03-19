class Solution:
    def longestMountain(self, A: List[int]) -> int:
        length = len(A)
        
        if length < 3: return 0
        dp1 = [ 0 for _ in range(length)]
        dp2 = [ 0 for _ in range(length)]
        
        for i in range(1,length-1):
            if A[i-1]  < A[i]:
                dp1[i] = dp1[i-1]+1
            j = length - i -1
            
            if A[j] > A[j+1]:
                dp2[j] = dp2[j+1] + 1
    
        for i in range(1,length):
            dp2[i] = dp1[i] + dp2[i] if dp1[i] > 0 and dp2[i] > 0 else 0
        
        max_ = max(dp2)
        return max_ + 1 if max_ > 0  else 0