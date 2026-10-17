class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set <string> st;
        for(string s : words) {
            st.insert(s);
        }
       int count = 0;
        for(string s: words) {
            string rev = s;
            reverse(rev.begin(),rev.end());
            if(rev == s) continue;
            if(st.find(rev)!=st.end()) {
                count++;
                st.erase(s);
                st.erase(rev);
            }
        }

        return count;
        
    }
};