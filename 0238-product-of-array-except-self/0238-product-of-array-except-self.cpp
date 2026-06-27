class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> prefix_product(n);
        // vector <int> suffix_product(n);
        prefix_product[0] = 1;
        // suffix_product[n-1] = 1;
        for (int i = 1 ; i<n;i++) {
            prefix_product[i] = prefix_product[i-1]*nums[i-1];
        }

        // now im not using suffix array also rather than i m multiilying the data of suffix array 
        // into prefix aaray and returing the prefix aaray 

        int  p = nums[n-1];
        for (int i = n-2;i>=0;i--) {
            prefix_product[i] = prefix_product[i] * p;
            p = p * nums[i];
        }

        // for (int i = n-2 ; i>=0;i--) {
        //     suffix_product[i] = suffix_product[i+1]*nums[i+1];
        // }

        // converting prefix into my ans 
        //  for (int i = 0 ; i<n;i++) {
        //     prefix_product[i] = prefix_product[i]*suffix_product[i];
        // }

        return prefix_product;
    }
};