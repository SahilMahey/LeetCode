class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = (start + end)/2;
        int min = 10000;
        int index;
        
       while (start <= end )
        {
            if (nums[mid] < min)
            {
                min = nums[mid];
                index  = mid;
                
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
       
        
        if (min <= target && target <= nums[nums.size()-1])
        {
                start = index;
                end  = nums.size()-1;
           
        }
        
        else
        {
                start = 0;
                end = index-1;
        }
        mid = (start + end)/2;
        
        while(start<=end)
        {
            if (nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid] > target)
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
            mid = (start + end)/2;
        }
        return -1; 
        
        
       
    }
};