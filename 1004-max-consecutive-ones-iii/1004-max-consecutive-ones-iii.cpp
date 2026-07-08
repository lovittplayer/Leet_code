class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int max_len = INT_MIN;
        int flips =0;
        int n = nums.size();
        int len = -1;
        while(j<n) {
            if(nums[j]==1) {
                j++;
            }
            else {
                if(flips<k) {
                    flips++;
                    j++;
                }
                else {
                 len = j-i;
                 max_len = max(len,max_len); 
                 while(nums[i]==1) i++;
                 i++;
                 j++;
                }
    

            }
        }
         len = j-i;
         max_len = max(len,max_len); 
        return max_len;
    }
};