class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i = 0; i < words.size(); i++)
        {
            
            auto res = find(words[i].begin(), words[i].end(), x);
            if (res != end(words[i])) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};