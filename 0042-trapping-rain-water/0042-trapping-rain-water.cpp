class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n == 0) return 0;

        vector<int> leftMax(n);

        leftMax[0] = 0;
        int maxi = height[0];

        for(int i = 1; i < n; i++) {
            leftMax[i] = maxi;
            maxi = max(maxi, height[i]);
        }

        int water = 0;
        int rightMax = height[n-1];

        for(int i = n-2; i >= 1; i--) {
            int level = min(leftMax[i], rightMax);

            if(level > height[i])
                water += level - height[i];

            rightMax = max(rightMax, height[i]);
        }

        return water;
    }
};