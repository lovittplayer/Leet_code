class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> st;
        int n1 = nums1.size();
        int n2 = nums2.size();
        st.push(nums2[n2-1]);
        vector<int>ans(n2,-1);
        vector<int>subAns(n1);
        for(int i = n2-2;i>=0;i--) {
            while(!st.empty() && nums2[i]>st.top()) {
                st.pop(); 
            }
            if(st.size()!=0) {
              ans[i] = st.top();
            }
            st.push(nums2[i]);
        }

      unordered_map<int,int>mp;
        for(int i = 0 ; i<n2;i++) {
            mp[nums2[i]] = ans[i];
        }

        for(int i = 0 ;i<n1;i++) {
            subAns[i] = mp[nums1[i]];
        }

        return subAns;
        
    }
};