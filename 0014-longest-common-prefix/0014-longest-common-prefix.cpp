class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int k = 0;
//         for (int i = 1; i < strs.size();i++)
//         {
            
//             k = 0;
//             while (ans[k]==strs[i][k] && (k < ans.size() && k < strs[i].size()))
//             {
//                 k++;
//             }
//             ans.resize(k);
//         }
           int i = 0;
            while (ans.length()!=0 && i < strs.size())
            {
                if (ans[k]== strs[i][k] && (k < ans.size() && k < strs[i].size()))
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