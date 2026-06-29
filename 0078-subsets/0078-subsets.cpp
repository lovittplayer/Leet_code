class Solution {
void sub(vector<int>&nums,int idx ,vector<int>&arr,vector<vector<int>>&ans) {
    if(idx==nums.size()) {
        ans.push_back(arr);
        return;
    }
    sub(nums,idx+1,arr,ans);
    arr.push_back(nums[idx]);
     sub(nums,idx+1,arr,ans);
     arr.pop_back();
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
 
        vector<int> arr ;
        vector<vector<int>>ans;
        
        sub(nums,0,arr,ans);

        return ans;
    }
};