class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum = 0;
        int digit_sum = 0;
        int num;
        for (int i = 0; i < nums.size(); i++)
        {
            ele_sum = ele_sum + nums[i];
            num = nums[i];
            while (num > 0)
            {
                digit_sum = digit_sum + num %10;
                num = num /10;
            }
        }
       return abs(digit_sum - ele_sum);
    }
};