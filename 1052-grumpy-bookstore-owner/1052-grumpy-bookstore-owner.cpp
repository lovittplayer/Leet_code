class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
         
         int n = customers.size();
         int k = minutes; // window size
         int prev_sum = 0;
         int curr_sum = 0;
         // calcultation of first window sum where the owner is grumpy
         for(int i = 0 ; i<k;i++) {
            if(grumpy[i]==1) {
                prev_sum += customers[i];
            }
         }
        
        int i = 1;
        int j = k;
 int max_idx = 0;
       int max_sum = prev_sum;
        while(j<n) {
            curr_sum = prev_sum;

            if(grumpy[j]==1) {
                curr_sum += customers[j];
            }

            if(grumpy[i-1]==1) {
                curr_sum -= customers[i-1];  
            }
            if(max_sum<curr_sum) {
                max_sum = curr_sum;
                max_idx = i;
            }
            prev_sum = curr_sum;
            i++;
            j++;
        }

        for(int i = max_idx ; i<max_idx+k;i++) {
            grumpy[i] = 0;
        }
int sats = 0;
        for (int i = 0 ; i<n;i++) {
            if(grumpy[i]==0) {
                sats += customers[i];
            }
        }
        return sats;

    }
};