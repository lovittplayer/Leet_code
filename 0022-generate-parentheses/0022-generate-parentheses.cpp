class Solution {
public:
    void generatepara(vector <string> & ans,string s,int i , int j ,int n) {
        if(i==n && j ==n) {
            ans.push_back(s);
            return;
        }

        if(i<n) {
            generatepara(ans,s+'(',i+1,j,n);
        }

        if(j<i) {
            generatepara(ans,s+')',i,j+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        
        generatepara(ans,"",0,0,n);

        return ans;

    }
};