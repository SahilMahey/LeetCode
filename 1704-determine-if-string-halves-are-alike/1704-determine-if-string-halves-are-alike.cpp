class Solution {
public:
    bool halvesAreAlike(string s) {
        
        char m,n;
        int count = 0;
        for (int i = 0, j = s.length()-1; i < j; i++,j--)
        {
            m = tolower(s[i]);
            n = tolower(s[j]);
            if (m =='a' || m=='e' || m=='i' || m=='o' || m=='u')
            {
                count++;
            }
            if (n =='a' || n=='e' || n=='i' || n=='o' || n=='u')
            {
                count--;
            }
            
        }
        return count==0;
    }
};