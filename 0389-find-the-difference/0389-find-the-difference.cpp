class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>ans;
        
        for (int i = 0; i < t.length(); i++ )
        {
            ans[t[i]]++;
        }
        for (int i = 0; i < s.length(); i++ )
        {
            ans[s[i]]--;
        }
        
        for(auto a: ans)
        {
          if (a.second>0)
          {
              return a.first;
          }
        }
        return ' ';
    }
};