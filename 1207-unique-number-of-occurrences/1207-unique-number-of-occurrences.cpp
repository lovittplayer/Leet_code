class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n = arr.size();
        for(int i = 0 ; i<n;i++) {
            mp[arr[i]]++;
        }

        unordered_set<int> st;
        for( auto ele : mp) {
            st.insert(ele.second);
        }

        if(st.size()==mp.size()) return true;
        else return false;

        


        
    }
};