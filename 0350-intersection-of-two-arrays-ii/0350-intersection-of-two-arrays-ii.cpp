class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ans_1;
        vector<int>k;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans_1[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (ans_1[nums2[i]]>0)
            {
                k.push_back(nums2[i]);
                ans_1[nums2[i]]--;
            }
        }
        
        
        return k;
    }
};