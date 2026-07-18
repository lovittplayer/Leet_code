class Solution {
public:
   void binarystring(vector<string>&ans,string s,int n) {
    if(n==0) {
        ans.push_back(s);
        return;
    }
    if(s.empty()) {
        binarystring(ans,s+'1',n-1);
       binarystring(ans,s+'0',n-1);
    }
    else if (s.back() =='0') {
        binarystring(ans,s+'1',n-1); 
          
    }
    else {
        binarystring(ans,s+'1',n-1);
       binarystring(ans,s+'0',n-1);

    }

    }

    vector<string> validStrings(int n) {
        
        vector<string>ans;
         string s;
      binarystring(ans,s,n);
      return ans;
        
    }
};