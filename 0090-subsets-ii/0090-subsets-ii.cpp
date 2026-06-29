class Solution {
public:
    void subs(vector<int>& arr, vector<vector<int>>& ans,
              vector<int>& subset, int idx, bool flag) {

        if (idx == arr.size()) {
            ans.push_back(subset);
            return;
        }

        int a = arr[idx];

        if (idx == arr.size() - 1) {
            if (flag) {
                subset.push_back(a);
                subs(arr, ans, subset, idx + 1, true);
                subset.pop_back();
            }
            subs(arr, ans, subset, idx + 1, false);
            return;
        }

        int b = arr[idx + 1];

        if (a == b) {
            if (flag) {
                subset.push_back(a);
                subs(arr, ans, subset, idx + 1, true);
                subset.pop_back();
            }
            subs(arr, ans, subset, idx + 1, false);
        }
        else {
            if (flag) {
                subset.push_back(a);
                subs(arr, ans, subset, idx + 1, true);
                subset.pop_back();
            }
            subs(arr, ans, subset, idx + 1, true);
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> subset;

        subs(nums, ans, subset, 0, true);

        return ans;
    }
};