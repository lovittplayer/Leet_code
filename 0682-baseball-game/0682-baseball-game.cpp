class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack <string> st;
        int ans = 0;
        for (int i = 0;i<n;i++) {
            if(operations[i]== "+") {
                int x = stoi(st.top());
                int y = 0;
                st.pop();
                if(st.size()!=0) y = stoi(st.top());
                st.pop();
                 st.push(to_string(y));
                st.push(to_string(x));
                st.push(to_string(x + y));
            }

            else if(operations[i]== "C") {
                 if(st.size()!=0) {
                    st.pop();
                 }    
            }

            else if (operations[i]== "D") {
                int x = stoi(st.top());
                st.push(to_string(2*x));
            }


            else  {
               st.push(operations[i]);
            }
        }

        while(st.size()!=0) {
            ans += stoi(st.top());
            st.pop();
        }
        return ans;
    }
};