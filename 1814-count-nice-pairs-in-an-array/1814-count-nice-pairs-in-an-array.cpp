class Solution {
public:
    int rev(int n) {
        int k =0;
       while(n>0) {
        int rem = n%10;
        n = n/10;
        k = k*10 + rem;
       }
       return k;

    }

    long long   nC2 (int n) {
        return (1LL * n * (n - 1)) / 2;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map <int,int> mp;
        long long count = 0;
        const int MOD = 1e9+7;
       
        for(int x : nums) {
            mp[(x-rev(x))]++;
        }

        for(auto ele : mp) {
            if(ele.second == 1) continue;
            else {
                count = (count + nC2(ele.second))%MOD;
            }
        }

        return count;

        
        
    }
};