//I learnt how to extract the digits from a number

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum = 0;
        int prod = 1;
        int var;
        while (n != 0)
        {
            var = n%10;
            n = n/10;
            prod = prod * var;
            sum = sum + var;
        }
        return prod - sum;
    }
    
    
};