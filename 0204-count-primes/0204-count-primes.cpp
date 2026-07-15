class Solution {
    void fillSieve(vector<bool>&sieve) {
        int n = sieve.size()-1;
        int limit = sqrt(n);
        for(int i = 2;i<=limit;i++) {
            if(sieve[i]==1) {
            for(int j= i*i;j<=n;j+=i) {
             sieve[j] = 0;
           }
            }
           
        }
    }

public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        int count = 0;
        vector<bool>sieve(n+1,true); // 1 means prime , 0 means not prime
        sieve[0] = 0;
        sieve[1] = 0;
        fillSieve(sieve);
        for(int i = 2;i<n;i++) {
            if(sieve[i]==1) count++;
        }
        return count;
    }
};