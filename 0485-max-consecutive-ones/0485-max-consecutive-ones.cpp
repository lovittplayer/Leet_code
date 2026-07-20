class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        
        int m = 0;
        int max_count = INT_MIN;
        for(int i = 0 ;i<nums.size();i+=m+1) {
            int count = 0;
           for(int j = i ; j<nums.size();j++) {
            if(nums[j]==1) count++;
            else {
                m = j;
                break;
            }
           }
           max_count = max(count,max_count);
        }

        return max_count;
        
    }
};