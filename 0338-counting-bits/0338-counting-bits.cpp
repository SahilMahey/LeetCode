// This is ths solution I learned
class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans = {0};
        for (int i = 1; i <= n; i++)
        {
           int ans_ = ans[i/2] + i%2;
            ans.push_back(ans_);
        }
        
       return ans; 
    }
};


//This is the solution i did

// vector <int> ans;
        
//         for (int i = 0; i <= n ;i++)
//         {
//             int count = 0;
//             int j = i;
//             while (j!=0)
//             {
//                 if (j&1)
//                 {
//                     count++;
//                 }
//                 j = j >> 1;
//             }
//             ans.push_back(count);
//         }
//         return ans;

























