class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r_s = 0,c_s = 0;
        int c_e = matrix.size()-1,r_e = matrix.size()-1;
        int i = c_s, j = c_e;
        int temp_1,temp_2;
        int  k =0;
        while (r_s<=r_e && c_s<=c_e)
        {
            while(i<j)
            {
                temp_1 = matrix[i][j];
                matrix[i][j] = matrix[r_s][i];
                // for (int m = 0; m < matrix.size(); m++)
                // {
                //   for (int n = 0; n < matrix.size(); n++)
                //   {
                //     cout << matrix[m][n] << " ";
                //   }
                //   cout<<endl;
                // }
                // cout<<endl;
                
                temp_2= matrix[r_e][c_e-k];
                matrix[r_e][c_e-k] = temp_1;
                // for (int m = 0; m < matrix.size(); m++)
                // {
                //   for (int n = 0; n < matrix.size(); n++)
                //   {
                //     cout << matrix[m][n] << " ";
                //   }
                //   cout<<endl;
                // }
                //cout<<endl;
                temp_1 = matrix[r_e-k][c_s];
                matrix[r_e-k][c_s] = temp_2;
                // for (int m = 0; m < matrix.size(); m++)
                // {
                //   for (int n = 0; n < matrix.size(); n++)
                //   {
                //     cout << matrix[m][n] << " ";
                //   }
                //   cout<<endl;
                // }
                 //cout<<endl;
                matrix[r_s][i] = temp_1;
               // for (int m = 0; m < matrix.size(); m++)
               //  {
               //    for (int n = 0; n < matrix.size(); n++)
               //    {
               //      cout << matrix[m][n] << " ";
               //    }
               //    cout<<endl;
               //  }
               //   cout<<endl;
                i++;
                k++;
            }
            
            r_s++;r_e--;c_s++;c_e--;
            i = c_s;
            j = c_e;
            k = 0;
            //cout << i << " " << j << endl;
        }
    
    }
};