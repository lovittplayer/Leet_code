class Solution {
public:
    bool isTrionic(vector<int>& nums) {

        int n = nums.size();
        if (n < 4) return false;

        int i = 0;

        // 1. Strictly Increasing
        while (i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }

        // Peak cannot be first or last
        if (i == 0 || i == n - 1) return false;

        // 2. Strictly Decreasing
        int j = i;
        while (j < n - 1 && nums[j] > nums[j + 1]) {
            j++;
        }

        // Valley cannot be same as peak or last
        if (j == i || j == n - 1) return false;

        // 3. Strictly Increasing
        while (j < n - 1 && nums[j] < nums[j + 1]) {
            j++;
        }

        return j == n - 1;
    }
};