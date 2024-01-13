class Solution {
public:
    string reverseVowels(string s) {
       char m,n;
        int i = 0;
        int j = s.length()-1;
        while (i<j)
        {
            m = tolower(s[i]);
            n = tolower(s[j]);
            cout <<m << " "<<n;
            if ((m =='a' || m=='e' || m=='i' || m=='o' || m=='u') && (n =='a' || n=='e' || n=='i' || n=='o' || n=='u' ))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if (m =='a' || m=='e' || m=='i' || m=='o' || m=='u')
            {
                j--;
            }
            else if (n =='a' || n=='e' || n=='i' || n=='o' || n=='u')
            {
                i++;
            }
            else
            {
                i++;j--;
            }
            
        }
        return s;
    }
};