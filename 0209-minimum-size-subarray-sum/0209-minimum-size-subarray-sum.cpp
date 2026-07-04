class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int min_len = INT_MAX;
        int sum = 0;
        while(j<n) {
        sum += nums[j];
          while(sum>=target) {
            int len = j-i+1;
            min_len = min(len,min_len);
            sum-= nums[i];
            i++;
          }
          j++;
        }

        if(min_len == INT_MAX) {
            return 0;
    
        }
        else return min_len;

    }
};