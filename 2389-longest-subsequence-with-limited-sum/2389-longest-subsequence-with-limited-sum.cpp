class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector <int> ans(queries.size());
        sort(nums.begin(),nums.end());

        for(int i = 1 ; i<nums.size();i++) {
            nums[i] += nums[i-1];
        }

     
        
        for (int i = 0 ;i<queries.size();i++) {
          int hi = nums.size()-1;
          int lo = 0;
          int maxlen = 0;
          while (hi>=lo) {
            int mid = lo + (hi-lo)/2;
            if(nums[mid]<=queries[i]) {
                ans[i] = mid+1;
                lo = mid + 1;
            }
            else {
             
                hi = mid-1;
            }

          }
        }
        return ans;
    }
};