class Solution {
public:
    int compress(vector<char>& chars) {
       int startIndex = 0;
       int count  = 1;
       for (int i = 1; i <= chars.size();i++)
       {
           if ( i < chars.size() && chars[i] == chars[i-1] )
           {
               count++;
           }
           else
           {
              chars[startIndex] = (chars[i-1]);
              if (count > 1)
              {
                  string ch = to_string(count);
                  for (char c:ch)
                  {
                      chars[++startIndex] = c; 
                   }
                   count = 1;
                   
               }
               startIndex++;
               
           }
       }
       
    chars.resize(startIndex);
     return chars.size();
    }
};