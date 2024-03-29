class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int k = 0;
        int i = 1;
            while (ans.length()!=0 && i < strs.size())
            {
                if (ans[k]== strs[i][k]  && k < strs[i].size())
                {
                    k++;
                }
                else
                {
                    i++;
                    ans.resize(k);
                    k = 0;
                }
            }
        return ans;
    }
   
};