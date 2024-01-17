class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int>ans;
        int col_end = matrix[0].size()-1;
        int row_end = matrix.size()-1;
        int row_start =0;
        int col_start =0;
        
        while (row_start<= row_end && col_start<= col_end)
        {
            
            for (int j = col_start; j <= col_end; j++)
            {
                if(matrix[row_start][j]!=101)
                {
                    ans.push_back(matrix[row_start][j]);
                    matrix[row_start][j] = 101;
                }
                
                
            }
            row_start++;
            for (int j = row_start; j <= row_end; j++)
            {
                if(matrix[j][col_end]!=101)
                {
                ans.push_back(matrix[j][col_end]);
                    matrix[j][col_end] = 101;
                }
                
            }
            col_end--;
            for (int j = col_end; j >= col_start; j--)
            {
                if(matrix[row_end][j]!=101)
                {
                ans.push_back(matrix[row_end][j]);
                    matrix[row_end][j] = 101;
                }
               
            }
            row_end--;
            for (int j = row_end; j >= row_start; j--)
            {
                if (matrix[j][col_start]!=101){
                ans.push_back(matrix[j][col_start]);
                    matrix[j][col_start]= 101;
                }
                
            }
            col_start++;
            
        }
        return ans;
    }
};