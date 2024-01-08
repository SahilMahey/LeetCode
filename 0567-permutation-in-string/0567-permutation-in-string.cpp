class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.length()<s1.length())
        {
            return false;
        }
        int i = 0;
        string p;
        sort(s1.begin(),s1.end());
        while (i <= (s2.length()-s1.length()))
        {
            p = s2.substr(i, s1.length());
            sort(p.begin(),p.end());
            if(s1==p)
            {
                return true;
            }
            i++;
        }
        return false;
    }
};