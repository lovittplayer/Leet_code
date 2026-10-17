class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set <string> st;
       int count = 0;
        for(string s: words) {
            string rev = s;
            reverse(s.begin(),s.end());
            if(st.find(rev)!=st.end()) {
                count++;
            }
            else {
                st.insert(s);
            }
            }
        

        return count;
        
    }
};