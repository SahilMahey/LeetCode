class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ans_1,ans_2;
        vector<int>k;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans_1[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            ans_2[nums2[i]]++;
        }
        
        for (int i = 0; i < nums1.size(); i++ )
        {
            if (ans_1[nums1[i]]>0 && ans_2[nums1[i]]>0)
            {
                k.push_back(nums1[i]);
                ans_1[nums1[i]]--;
                ans_2[nums1[i]]--;
            }
        }
        return k;
    }
};