class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int carry = 0;
        int new_num;
        int i = num.size()-1;
        while (i >= 0)
        {
            new_num  = (num[i] + carry + k%10);
            ans.push_back(new_num%10);
            carry = (new_num)/10;
            k = k /10;
            i--;
            
        }
        
        while (k > 0 || carry > 0)
        {
            new_num = k%10 + carry;
            ans.push_back(new_num%10);
            carry = (new_num)/10;
            k = k /10;
            
        }
        
//         if (carry > 0)
//         {
//             ans.push_back(carry);
//         }
        
//         while(k > 0)
//         {
//           ans.push_back(k%10);
//           k = k / 10; 
//         }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};