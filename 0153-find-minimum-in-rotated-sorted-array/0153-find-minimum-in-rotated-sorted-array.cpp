class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;
        int mid = (start + end)/2;
        int min = 5001;
        while (start <= end )
        {
            if (nums[mid] < min)
            {
                min = nums[mid];
            }
            else if (nums[mid] >= nums[0] && nums[mid] > nums[nums.size()-1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
             mid = (start + end)/2;
        }
        
        return min;
        
    }
};