class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int k;
        for (int i = 1; i < strs.size();i++)
        {
            
            k = 0;
            while (ans[k]==strs[i][k] && ans.length()>0 && (k < ans.size() && k < strs[i].size()))
            {
                k++;
            }
            ans.resize(k);
        }
        return ans;
    }
   
};