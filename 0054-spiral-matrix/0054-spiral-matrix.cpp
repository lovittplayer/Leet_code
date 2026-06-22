class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int minr = 0;
        int minc = 0;
        int maxr = matrix.size()-1;
        int maxc = matrix[0].size()-1;

        vector <int> v;

        while (minr<=maxr && minc <=maxc) {
            for (int i = minc ; i<=maxc;i++) {
                  v.push_back(matrix[minr][i]);
            }
            minr++;

            if (minr > maxr || minc > maxc) break;

             for (int j = minr ; j<=maxr;j++) {
                  v.push_back(matrix[j][maxc]);
            }
            maxc--;
            if (minr > maxr || minc > maxc) break;

            for (int k = maxc ; k>=minc;k--) {
                  v.push_back(matrix[maxr][k]);
            }
            maxr--;
            
            if (minr > maxr || minc > maxc) break;

              for (int l = maxr ; l>=minr;l--) {
                  v.push_back(matrix[l][minc]);
            }
            minc++;

        }
        return v;
    }
};