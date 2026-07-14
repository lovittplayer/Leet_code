class Solution {
public:
bool isPrime(int n) {
    if (n==1) return false;
    if (n==2) return true;
    for(int i = 2; i<=sqrt(n);i++) {
        if(n%i==0) {
            return false;
            
        }
       
    }
     return true;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        
    int maxi = 0;
        for (int i =0 ; i<nums.size();i++) {
            if(isPrime(nums[i][i])) {
                   maxi = max(nums[i][i],maxi);
            }

            if(isPrime(nums[i][nums[0].size()-i-1])) {
                maxi = max(nums[i][nums.size()-i-1],maxi);
            }
        }
        return maxi;
      
    }
      
};