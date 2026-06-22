class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         for (int i = 0 ; i<matrix.size();i++) {
     for(int  j = i ; j<matrix.size();j++) {
        
        if(i==j) continue;
        else {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
     }
     
    }

     for (int i = 0 ; i<matrix.size();i++) {
       int k = 0;
       int j = matrix.size()-1;
       while(k<j) {
        int temp = matrix[i][k];
        matrix [i][k] = matrix[i][j];
        matrix [i][j] = temp;
        k++;
        j--;
       }
     }

     return;
     
    }
    
};