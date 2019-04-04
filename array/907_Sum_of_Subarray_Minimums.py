


#单调栈在O(n)时间找到左（右）第一个小于该数的数
class Solution:
    def sumSubarrayMins(self, A) -> int:
        N = len(A)
        stack = []
        prev = [None] * N
        mod = 10**9 + 7 
        # 递增栈
        for i in range(N):
            while stack and A[i] <= A[stack[-1]]:
                stack.pop()
            prev[i] = stack[-1] if stack else -1
            stack.append(i)
        print(prev,stack)
        stack = []
        Next = [None] * N
        
        for i in range(N-1,-1,-1):
            while stack and A[i] < A[stack[-1]]:
                stack.pop()
            Next[i] = stack[-1] if stack else N
            stack.append(i)
        
        #return sum( (i-prev[i])*(Next[i]-i)*A[i] for i in range(N))%mod
        return sum((i - prev[i]) * (Next[i] - i) * A[i] for i in range(N)) % (10**9 + 7)


if __name__ == '__main__':
    num = [10,1,2,4,2,5,2]
    stack = []
    N = len(num)
    prev = [None] * N
    N = len(num)

    #从左往右
    for i in range(N):
        while stack and num[i] <= num[stack[-1]]:
            stack.pop()
        prev[i] = stack[-1] if stack else -1
        stack.append(i)