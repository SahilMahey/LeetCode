class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        if (val > 50)
        {
            return nums.size();
        }
        int i = 0;
        int j = nums.size()-1;
        while (i<=j)
        {
            if (nums[i]==val && nums[j]!=val)
            {
                nums[i] = 51;
                swap(nums[i],nums[j]);
                count++;
                i++;
                j--;
            }
            else if (nums[i]==val && nums[j]==val)
            {
                j--;
                count++;
            }
            else
            {
                i++;
            }
            
        }
        
        return nums.size()-count;
    }
};