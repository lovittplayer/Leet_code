class Solution {
public:
    string removeDuplicates(string s) {
        
        stack <char> st;

     
        st.push(s[0]);
        for(int i = 1 ; i<s.size();i++) {
            if(st.size()==0) {
                st.push(s[i]);
                continue;
            }

            if(s[i]!=st.top())  {
                st.push(s[i]);
            }
            else {
                st.pop();
            }

            
     }
     string ans;
       while(st.size()!=0) {
        char ele = st.top();
        ans.push_back(ele);
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
    
};