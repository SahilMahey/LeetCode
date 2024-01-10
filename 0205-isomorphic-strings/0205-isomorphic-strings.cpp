class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,char>c;
       unordered_map<char,char>d;
       for (int i = 0; i < s.length(); i++)
       {
            c[s[i]] = t[i];
            d[t[i]] = s[i];
       }
       
        for (int i = 0; i < s.length(); i++)
       {
            if (c[s[i]]!=t[i] || d[t[i]]!=s[i])
            {
                return false;
            }
       }
        
        
        return true;
    }
};