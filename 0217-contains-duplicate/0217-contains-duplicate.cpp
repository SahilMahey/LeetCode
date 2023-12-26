class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> num(nums.begin(), nums.end());
        
        return num.size() < nums.size();
    }
};