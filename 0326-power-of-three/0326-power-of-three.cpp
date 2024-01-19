class Solution {
public:
    bool isPowerOfThree(int n) {
     if (n==1)
     {
         return true;
     }
      while (n > 0  && n%3==0)
      {
          if (n <=3 && n/3==1 )
          {
             return true;
          }
          n = n / 3;
      }
      return false;
    }
    
};