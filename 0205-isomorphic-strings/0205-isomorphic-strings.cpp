class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,char>c,d;
       
       for (int i = 0; i < s.length(); i++)
       {
           if ((c[s[i]] && c[s[i]]!=t[i]) ||  (d[t[i]] && d[t[i]]!=s[i]))
           {
               return false;
           }
            c[s[i]] = t[i];
            d[t[i]] = s[i];
           
       }
        return true;
    }
};