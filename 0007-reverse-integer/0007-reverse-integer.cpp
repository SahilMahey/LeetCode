class Solution {
public:
    int answer = 0;
    int reverse(int x) {
        int answer = 0;
        int digit;
        
        while (x!=0)
        {
            if (answer > INT_MAX/10 || answer < INT_MIN/10)
            {
                return 0;
            }
            digit = x % 10;
            answer = (answer * 10) + digit;
            x = x / 10;
          
        }
        
        return answer;
        
        
    }
};