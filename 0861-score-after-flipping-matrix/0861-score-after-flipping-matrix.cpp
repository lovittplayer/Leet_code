class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        // row flip if first element is zero !!
        for (int i = 0; i<grid.size();i++) {
            if (grid[i][0] == 0) {
               for (int j=0;j<grid[0].size();j++) {
                    grid[i][j] = 1 - grid[i][j];
            }
            }  
        }

        for (int i = 1; i<grid[0].size();i++) {
            int noz = 0;
            int noo = 0;
            for (int j = 0 ; j<grid.size();j++) {
                if (grid[j][i]==0) noz++;
                else noo++; 
            }
            if(noz>noo) {
                for (int j = 0 ; j<grid.size();j++) {
                  grid[j][i] = 1-grid[j][i];
            }
            }
        }

        int score = 0;
        for (int i = 0; i<grid.size();i++) {
            int x = 1;
            int sum = 0;
              for (int j=grid[0].size()-1;j>=0;j--) {
                  sum = grid[i][j]*x;
                  score += sum;
                  x*=2;
            }  
        }

        return score;

    }
};