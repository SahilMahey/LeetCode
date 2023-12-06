class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size()-1;
        int mid = (start + end)/2;
        int ans_1 = -1;
        vector<int> num;
        while (start <=end)
        {
            if (target < nums[mid])
            {
               end = mid - 1;
            }
            else if (nums[mid] == target)
            {
                ans_1 = mid;
                end = mid-1;
            }
            else if (target >  nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                return {-1,-1};
            }
            mid = (start + end)/2;
            
            
        }
       
        start = 0;
        end = nums.size()-1;
        mid = (start + end)/2;
        int ans_2 = -1;
        while (start <=end)
        {
            if (target < nums[mid])
            {
               end = mid - 1;
            }
            else if (nums[mid] == target)
            {
                ans_2 = mid;
                start = mid+1;
            }
            else if (target >  nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                return {-1,-1};
            }
            mid = (start + end)/2;
            
            
        }
        
        return {ans_1,ans_2};
    }
};