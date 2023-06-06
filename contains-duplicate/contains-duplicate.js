/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let flag = false 
    let i = 0;
    while (!flag && i < nums.length )
    {
        let num = nums[i]
        for (let j = i+1; j <nums.length; j++ )
        {
            if (nums[j] == num)
            {
                flag = true;
                break;
                
            }
        }
        i++;
      
    }
    return flag;
    
};