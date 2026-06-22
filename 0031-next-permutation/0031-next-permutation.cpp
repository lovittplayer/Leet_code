class Solution {
void reversePart(int i , int j, vector<int> & nums) {
    while(i<j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    return;
}
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for(int i = n -2 ; i>=0;i--) {
            if(nums[i]<nums[i+1]) {
                idx = i;
                break;
            }
        }
        if(idx == -1) {
           reverse(nums.begin(),nums.end());
           return;
        }

        for(int i = n-1;i>=0;i--) {
            if(nums[idx]<nums[i]) {
                swap(nums[idx],nums[i]);
                break;
            }
        }
     if (idx+1 ==n -1) return;
     reversePart(idx+1,n-1,nums);
     return;


        
    }
};