class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector <int> pre_n(n+1);
        vector <int> suff_y(n+1);
        

        pre_n[0] = 0;
        suff_y[n] = 0;
        int no_of_n  = 0;
        int no_of_y = 0;
// Prefix sum forN 
        for (int i = 1 ; i<n+1;i++) {
            if(customers[i-1]=='N') no_of_n++;
            pre_n[i] = no_of_n;
        }
   // made suffix sum for Y
        for (int i = n-1 ; i>=0;i--) {
            if(customers[i]=='Y') no_of_y++;
            suff_y[i] = no_of_y;
        }
   
// makig suffix_y as my total pentailty 
        for (int i = 0 ; i<n+1;i++) {
              suff_y[i]+= pre_n[i];
        }
        
        int min = INT_MAX;

        for (int i = 0 ; i<n+1;i++) {
            if(min>suff_y[i]) min = suff_y[i];
        }
      int idx = -1;
        for (int i = 0 ; i<n+1;i++) {
            if(min == suff_y[i]) {
                idx = i;
                break;
            }
        }
        return idx;
    }
};