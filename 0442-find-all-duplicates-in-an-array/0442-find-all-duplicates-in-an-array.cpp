class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> nums2;
        sort(nums.begin(),nums.end());
        int i = 0;
       
        cout << nums.size();
        while (i < nums.size()-1)
        {
            if (nums[i]==nums[i+1]) 
            {
                nums2.push_back(nums[i]);
                i = i + 2;
            }
            else
            {
                i = i +1 ;
            }
           
        }
        return nums2;
    }
};