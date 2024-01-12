class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       if (s2.length()<s1.length())
       {
           return false;
       }
        
       vector<int>a(26,0);
       vector<int>b(26,0);
       int ch_num;
       for (int i = 0; i < s1.length(); i++)
       {
           ch_num = s1[i] - 'a';
           a[ch_num]++;
       }
       string m = " ";
       for (int j = 0; j <= s2.length()-s1.length(); j++)
       {
           m = s2.substr(j,s1.length());
           for (int k = 0; k < m.length(); k++)
           {
                ch_num = m[k] - 'a';
                b[ch_num]++;
           }
           if (a == b)
           {
               return true;
           }
           for (int k = 0; k < m.length(); k++)
           {
                ch_num = m[k] - 'a';
                b[ch_num] = 0;
           }
           
       }
       
       return false;
    }
};