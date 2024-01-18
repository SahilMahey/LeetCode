class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r_s = 0, r_e = matrix.size()-1;
        int i = r_s, j = r_e;
        int temp_1,temp_2;
        int  k =0;
        while (r_s<=r_e)
        {
            while(i<j)
            {
                temp_1 = matrix[i][j];
                matrix[i][j] = matrix[r_s][i];
                temp_2= matrix[r_e][r_e-k];
                matrix[r_e][r_e-k] = temp_1;
                temp_1 = matrix[r_e-k][r_s];
                matrix[r_e-k][r_s] = temp_2;
                matrix[r_s][i] = temp_1;
              
                i++;
                k++;
            }
            
            r_s++;r_e--;
            i = r_s;
            j = r_e;
            k = 0;
        }
    
    }
};