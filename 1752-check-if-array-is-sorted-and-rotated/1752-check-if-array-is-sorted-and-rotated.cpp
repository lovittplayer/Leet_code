class Solution {
public:
    bool check(vector<int>& nums) {
    // in this question we are mainnting a count jaha ith element apne se next element se bda h 
    // if that count = 0 then toh woh normal acenting order wala array h 
    // if count = 1 this mean ek baar aise ho rha h ki i element apne se next se bda hai this is case is rotated but sorted array 
    // count > 1 then yeh sorted nhi h 
       int n = nums.size();
       int count = 0;
           for(int i = 0 ; i<nums.size();i++) {
              if(nums[i]>nums[(i+1)%n]) {
                count++;
              }
        }
        if (count>1) return false;
        else return true;
       }

       

};