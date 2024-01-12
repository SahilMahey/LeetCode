class Solution {
public:
    string removeDuplicates(string s) {
       int i = 1;
       string n;
       n.push_back(s[0]);
       while (i < s.length())
       {
           if(!n.empty() && n.back() == s[i] )
             {
                 n.pop_back();
             }
             else
             {
                 n.push_back(s[i]);
             }
          i++;
       }
       return n;
       
    }
};