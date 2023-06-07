/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    i = 0;
    nums = nums.sort();
    while (i < nums.length-1)
        {
            if (nums[i] != nums[i+1])
            {
                break;
            }
            else
            {
                i = i +2;
            }
        }
        return nums[i];
};