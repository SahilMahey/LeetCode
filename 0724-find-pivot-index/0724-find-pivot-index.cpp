class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int element : nums)
        {
            sum = sum + element;
            
        }
        
        int left_sum=0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (left_sum == sum - (left_sum+nums[i]))
            {
               return i;
            }
            left_sum+= nums[i];
            
        }
        return -1;
    }
    
};