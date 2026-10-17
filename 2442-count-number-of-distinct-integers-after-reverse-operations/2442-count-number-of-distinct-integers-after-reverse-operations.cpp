class Solution {
public:
     int rev(int n) {
        int k = 0;
        while(n>0) {
          int rem = n%10;
          n = n/10;
          k = (k*10)+rem;
        }
         return k;
     } 
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set <int> s;
        int n = nums.size();

        for(int i = 0 ;i<n;i++) {
            int r = rev(nums[i]);
            s.insert(r);
            s.insert(nums[i]); 
        }

        return s.size();


    }
};