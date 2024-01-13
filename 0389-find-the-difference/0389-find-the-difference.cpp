class Solution {
public:
    char findTheDifference(string s, string t) {
       
        char ch = 0;
        for (int i = 0; i < t.length(); i++ )
        {
            ch = ch ^ (s[i]^t[i]);
        }
        return ch;
    }
};