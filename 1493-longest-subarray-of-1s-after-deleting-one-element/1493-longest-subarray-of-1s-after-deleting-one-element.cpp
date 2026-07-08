class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int max_len = INT_MIN;
        int len = -1;
        int del = 0;
        int n = nums.size();
        int flip = 0;
        while(j<n) {
            if (nums[j]==1) j++;
            else {
                if(flip == 0){
                   flip++;
                   j++;
                } 
             else{
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
        return max_len-1;
    
    }
};