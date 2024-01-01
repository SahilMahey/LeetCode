class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        for i in range(len(numbers)):
            new_arr = numbers[i+1:]
            if (target - numbers[i]) in new_arr:
                return [i+1, new_arr.index(target - numbers[i])+2+i]