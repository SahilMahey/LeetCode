class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum = 0;
        int digit_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ele_sum = ele_sum + nums[i];
        }
        int num  = nums[0];
        int j = 1;
        while (num > 0)
        {
            digit_sum = digit_sum + num %10;
            cout<<num%10<<endl;
            num = num /10;
            cout<<num<<endl;
            if (num == 0 && j < nums.size())
            {
                num = nums[j];
                j++;
            }
        }
       
        return abs(digit_sum - ele_sum);
    }
};