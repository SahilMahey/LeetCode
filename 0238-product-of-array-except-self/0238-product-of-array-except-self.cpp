class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod_1 = 1;
        int prod_2 = 1;
        vector<int>mul_1;
        vector<int>mul_2;
        vector<int>c;
        for (auto a: nums)
        {
            prod_1 = prod_1 * a;
            mul_1.push_back(prod_1);
        }
        
        for (auto it = --nums.end(); it!=--nums.begin(); it--)
        {
            prod_2 = prod_2 * (*it);
            mul_2.push_back(prod_2);
        }
        reverse(mul_2.begin(),mul_2.end());
        for (auto a:mul_1)
        {
            cout<<a<< " ";
        }
        cout<<endl;
        for (auto a:mul_2)
        {
            cout<<a<< " ";
        }
        c.push_back(mul_2[1]);
        for (int i = 1; i < mul_1.size()-1; i++)
        {
            c.push_back(mul_1[i-1] * mul_2[i+1]);
        }
        c.push_back(mul_1[mul_1.size()-2]);
        return c;
        
    }
    
};