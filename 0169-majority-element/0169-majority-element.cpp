class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>c;
        for (int i= 0; i < nums.size();i++)
        {
            c[nums[i]]++;
        }
        
        for (auto a: c)
        {
            if (a.second > nums.size()/2)
            {
                return a.first;
            }
        }
        return 0;
    }
};