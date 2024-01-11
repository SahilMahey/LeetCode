class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i=0,j = 0;
        int lastIndex;
        while ( j < s.length())
        {
            int startIndex = i;
            while (j < s.length() && s[j] == ' ') j++;
            while (j < s.length() && s[j]!=' ')
            {
                s[i++] = s[j++];
                lastIndex = i;
                
            }
            reverse(s.begin() + startIndex , s.begin()+i);
            
            s[i++] = ' ';
        }
        s.resize(lastIndex);
        return s;
    }
};