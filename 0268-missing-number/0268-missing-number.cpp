class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();
      int sum1 = (n )*(n+1)/2;

      for(int i = 1 ; i<n;i++) {
        nums[i] += nums[i-1];
      }

      return sum1-nums[n-1];
    }
};