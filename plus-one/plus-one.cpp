class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int carry = 0;
        int i = digits.size()-1;
        int new_num;
        while (i >= 0)
        {
            if (i == digits.size()-1)
            {
               new_num = digits[i] + 1 + carry; 
            }
            else
            {
                new_num = digits[i] +  carry;
            }
            
            ans.push_back(new_num%10);
            carry = new_num/10;
            i--;
        }
        if (carry > 0)
        {
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};