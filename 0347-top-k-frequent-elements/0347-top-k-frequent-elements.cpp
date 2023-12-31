class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>count;
        map<int,vector<int>>count2;
        vector<int>c;
        for ( auto a: nums)
        {
            count[a]++;
        }
        for (auto a = count.begin(); a!=count.end(); a++)
        {
            cout<< a->first << " "<< a->second<<endl;
            count2[a->second].push_back(a->first);
            
            
        }
        
        for (auto b = count2.rbegin(); b!=count2.rend()&&k>0; b++)
        {
            
            cout<< b->first<< " ";
            
            for (auto a:b->second)
            {
                c.push_back(a);
                cout << a;
                k--;
            }
            cout<<endl;
         }
        
        return c;
    }
    
};