//This above was my solution
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

// // This is the optimal solution I understand from the discussio forum of Leetcode.

// vector<int> nums2;

// while (i < nums.size()-1)
// {
//     if(nums.empty())return {};
//     if (nums[abs(nums[i])-1] < 0)
//     {
//         nums2.push(nums[i]*(-1))
//     }
//     nums[abs(nums[i])-1]= nums[abs(nums[i])-1] * (-1);
    
//     i++;
// }

