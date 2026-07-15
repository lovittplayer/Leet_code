class Solution
{
public:
    void sievefill(vector<bool> &sieve)
    {
        int n = sieve.size() - 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (sieve[i] == 1)
            {
                for (int j = i * i; j <= n; j = j + i)
                {
                    sieve[j] = 0;
                }
            }
        }
    }
    int distinctPrimeFactors(vector<int> &nums)
    {
        int n = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (n < nums[i])
            {
                n = nums[i];
            }
        }
        vector<bool> sieve(n + 1, true);
        sieve[0] = 0;
        sieve[1] = 0;
        int count = 0;
        vector<int> primes;
        sievefill(sieve);
        for (int i = 2; i <= n; i++)
        {
            if (sieve[i] == 1)
            {
                primes.push_back(i);
            }
        }

        vector<bool> taken(primes.size(), false);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < primes.size(); j++)
            {
                if (taken[j] == false)
                {
                    if (nums[i] % primes[j] == 0)
                    {
                        taken[j] = true;
                    }
                }
            }

           
        }
         for (int i = 0; i < taken.size(); i++)
            {
                if (taken[i] == 1)
                    count++;
            }

            return count;
    }
};