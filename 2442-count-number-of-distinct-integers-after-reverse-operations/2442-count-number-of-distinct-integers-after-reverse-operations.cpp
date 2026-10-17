class Solution {
public:
     void rev(int n,vector<int> &nums) {
        int k = 0;
        while(n>0) {
          int rem = n%10;
          n = n/10;
          k = (k*10)+rem;
        }
        nums.push_back(k);
     } 
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set <int> s;
        int n = nums.size();
        
        for(int i = 0 ;i<n;i++) {
            rev(nums[i],nums);
        }

        for(int x : nums) {
              s.insert(x);
        }

        return s.size();
    }
};