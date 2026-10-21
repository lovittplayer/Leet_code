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
    int countNicePairs(vector<int>& nums) {
        unordered_map <int,int> mp;
        vector <int> diff;
        int MOD = 1e9+7;
        int count = 0;
        for (int s : nums) {
           diff.push_back(s-rev(s));
        }
       
        for(int x : diff) {
            if(mp.find(x)==mp.end()) {
                mp[x]++;
            }
            else {
               count = count%MOD;
                count +=  mp[x];
                mp[x]++;
            }
        }


        return count%MOD;

        
        
    }
};