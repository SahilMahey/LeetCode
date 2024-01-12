class Solution {
public:
    string removeDuplicates(string s) {
       string n;
       n.push_back(s[0]);
       for(int i=1 ; i<s.length() ; i++)
       {
           if(!n.empty() && n.back() == s[i] )
             {
                 n.pop_back();
             }
             else
             {
                 n.push_back(s[i]);
             }
         
       }
       return n;
       
    }
};