class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sum_arr;
        int sum = 0;
        for (int element : nums)
        {
            sum = sum + element;
            sum_arr.push_back(sum);
            cout << sum<<endl;
        }
        
        int left=0;
        int found  = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (left==sum_arr[nums.size()-1]-sum_arr[i])
            {
               return i;
            }
            left  = sum_arr[i];
            
        }
        return -1;
    }
    
};