class Solution {
   void  combination2( vector<vector<int>>&ans,vector<int>&v,vector<int>& candidates,int target,int idx) {
     
      if(target==0) {
        ans.push_back(v);
      }
       if(target<0) return;
      for(int i = idx;i<candidates.size();i++) {
        if(i > idx && candidates[i] == candidates[i-1])  continue;
        v.push_back(candidates[i]);
        combination2(ans,v,candidates,target-candidates[i],i+1);
        v.pop_back();
      }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        combination2(ans,v,candidates,target,0);
        return ans;

        
        
    }
};