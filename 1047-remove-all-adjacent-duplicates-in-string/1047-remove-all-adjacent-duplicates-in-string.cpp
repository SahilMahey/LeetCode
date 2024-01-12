class Solution {
public:
    string removeDuplicates(string s) {
       string n;
       
       for(char c: s)
       {
           if(!n.empty() && n.back() == c )
             {
                 n.pop_back();
             }
             else
             {
                 n.push_back(c);
             }
         
       }
       return n;
       
    }
};