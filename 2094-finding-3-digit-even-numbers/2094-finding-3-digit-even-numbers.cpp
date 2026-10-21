class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map <int,int> mp;
        int n = digits.size();
        for(int i = 0 ; i<n;i++) {
            mp[digits[i]]++;
        }

        vector <int> ans;

        for(int i = 100;i<999;i=i+2) {
            unordered_map <int,int> temp = mp;
            int ele = i;
            int a = ele%10;
             ele = ele/10;
             int b = ele%10;
             ele = ele/10;
             int c = ele%10;
             if(temp[a]<=0) continue;
             temp[a]--;
             if(temp[b]<=0) continue;
             temp[b]--;
             if(temp[c]<=0) continue;
             temp[c]--;
             ans.push_back(i);

        }

        return ans;
    }
};