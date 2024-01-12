class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       if (s2.length()<s1.length())
       {
           return false;
       }
       unordered_map<char,int>a;
       
       for (int j = 0; j < s1.length();j++)
       {
               a[s1[j]]++;
       }
       string m = " ";
       bool n;
       for (int i = 0; i <= s2.length()-s1.length(); i++)
       {
           m = s2.substr(i,s1.length());
           unordered_map<char,int>b;
           for (int j = 0; j < m.length();j++)
           {
             b[m[j]]++;
           }
          n = true;
           for (int j = 0; j < m.length();j++)
           {
             if (!(a[m[j]]) || a[m[j]] != b[m[j]])
             {
                 n = false;
                 break;
             }
           }
           if (n)
           {
               return n;
           }
}
        return false;
    }
};