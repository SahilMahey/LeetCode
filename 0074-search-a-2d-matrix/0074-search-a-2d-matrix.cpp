class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_start = 0;
        int row_end = matrix.size()-1;
        int col_start = 0;
        int col_end = matrix[0].size()-1;
        int row_mid = (row_start + row_end)/2;
        int col_mid = (col_start + col_end)/2;
       
        cout << "1 "<<row_mid << " " << col_mid<<endl;
        while (row_start <= row_end)
        {
            while (col_start <= col_end)
            {
                if (matrix[row_mid][col_mid] == target)
                {
                    return true;
                }
                else if (matrix[row_mid][col_mid] > target)
                {
                    col_end = col_mid -1;
                }
                else
                {
                    col_start = col_mid + 1;
                }
                col_mid = (col_start + col_end)/2;
                cout <<"2 " << row_mid << " " << col_mid<<endl;
            }
            
            if (col_start <=0)
            {
                row_end = row_mid -1;
            }
            else
            {
                row_start = row_mid + 1;
            }
            col_start = 0;
            col_end = matrix[0].size()-1;
            row_mid = (row_start + row_end)/2;
            cout << "3 "<<row_mid << " " << col_mid <<endl;
        }
        return false;
        
    }
};