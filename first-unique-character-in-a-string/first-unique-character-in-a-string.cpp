class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>ans;
        for (int i = 0; i < s.length();i++)
        {
            ans[s[i]]++;
        }
         for (int i = 0; i < s.length();i++)
        {
            if (ans[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};