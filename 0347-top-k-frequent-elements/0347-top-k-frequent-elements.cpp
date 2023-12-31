class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        map<int,vector<int>>count2;
        vector<int>c;
        for ( auto a: nums)
        {
            count[a]++;
        }
        for (auto a = count.begin(); a!=count.end(); a++)
        {
           count2[a->second].push_back(a->first);
        }
        
        for (auto b = count2.rbegin(); b!=count2.rend()&&k>0; b++)
        {
            for (auto a:b->second)
            {
                c.push_back(a);
                k--;
            }
           
         }
        
        return c;
    }
    
};