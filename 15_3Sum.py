class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        
        res = []
        length = len(nums)

        for i in range(length-2):
            lo = i + 1
            h = length - 1

            if i>0 and nums[i-1] == nums[i] : continue
            while lo < h :
                ans = nums[i] + nums[lo] + nums[h]
                
                if ans < 0:
                    lo += 1
                elif ans > 0:
                    h -= 1
                else:
                    res.append([nums[i], nums[lo], nums[h]])
                    while lo < h and nums[lo+1] == nums[lo]:
                        lo += 1
                    while lo < h and nums[h-1] == nums[h]:
                        h -= 1
                    lo += 1
                    h -= 1
        return res
                    