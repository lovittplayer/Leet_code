class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0 ; i<nums.size(); i++) {
             res = nums[i]^res;
        }
        int temp = res;
        int k = 0;
        
        while(true) {
            if(temp&1 == 1) {
                break;
            }
            temp = temp>>1;
            k++;
        }
        int fele =0;
        for (int i = 0 ; i<nums.size(); i++) {
            if((nums[i]>>k)& 1 == 1) fele = nums[i] ^ fele;
        }
        int sele = res^fele;
        return {fele,sele};
    }
};