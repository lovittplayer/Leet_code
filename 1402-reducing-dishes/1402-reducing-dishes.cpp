class Solution
{
public:
    int maxSatisfaction(vector<int> &satisfaction)
    {
        // in this solution suffix sum nikal ke hum dekh rhe h kha se suffix sum >0 wha tk time se multiply krke we are getinng the ans 
        int n = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());
        vector<int> suff(satisfaction.size());
        suff[n - 1] = satisfaction[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suff[i] = suff[i + 1] + satisfaction[i];
        }

        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (suff[i] >= 0)
              {
                idx = i;
                break;

              }  
        }

        if (idx == -1)return 0;
            
        int x = 1;
        int ans = 0;
        for (int i = idx; i <= n - 1; i++)
        {
            ans += (satisfaction[i] * x);
            x++;
        }
        return ans;
    }
};