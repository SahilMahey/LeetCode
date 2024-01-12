class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       if (s2.length()<s1.length())
       {
           return false;
       }
        
       vector<int>a(26,0);
       vector<int>b(26,0);
       
       for (int i = 0; i < s1.length(); i++)
       {
           
           a[s1[i] - 'a']++;
       }
       int k = 0;
       for (int j = 0; j < s2.length(); j++)
       {
           
           b[s2[j] - 'a']++;
           cout<<j<<"j";
           
           if (k == s1.length()-1)
           {
               
               if (a==b)
               {
                   return true;
               }
               else
               {
                   b[s2[j-(s1.length()-1)] - 'a']--;
                   for (auto a: b)
                   {
                       cout<<a;
                   }
               }
               k = s1.length()-1;
           }
           else
           {
               k++;
           }
           
        }
       
       return false;
    }
};