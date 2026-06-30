class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        // this is my solution jisme maine coeff ka array bna lia uske baad usme se jo maximum element h use return krdia agr <0 hai toh 0 return kia 
         int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
         vector <int>like_time_coff(satisfaction.size());
         for (int i = n-1;i>=0;i--) {
            int multi = 1;
            for (int j = i ;j<=n-1;j++)  {
                like_time_coff[i] += satisfaction[j]*multi;
                multi++;
            }
         }

         int max = INT_MIN;
         for (int i = 0 ; i<n;i++) {
            if(like_time_coff[i]>max) max = like_time_coff[i];
         }


        if(max<0) return 0;
         return max;
         
        
    }
};