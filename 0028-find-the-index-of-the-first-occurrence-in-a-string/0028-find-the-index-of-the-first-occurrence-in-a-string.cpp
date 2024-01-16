class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length()>haystack.length())
        {
            return -1;
        }  
        if (haystack.find(needle)!=string::npos)
        {
            return haystack.find(needle);
        }
        return -1 ;
    }
};