class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        for i in range(len(nums)):
            new_arr = nums[i+1:]
            if (target - nums[i]) in new_arr:
                return [i, new_arr.index(target - nums[i])+1+i]