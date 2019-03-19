class Solution:
    def brokenCalc(self, X: int, Y: int) -> int:
        if X >= Y :
            return X - Y
        
        count = 0
        while Y > X:
            if Y%2 == 0:
                Y = Y / 2
                count += 1
            else:
                Y = (Y+1)/2
                count += 2
        return int(count + X - Y)