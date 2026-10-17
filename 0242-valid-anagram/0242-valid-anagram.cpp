class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map <char,int> mp;
       for(char ch : s) {
         if(mp.find(ch)!=mp.end()) {
            mp[ch]++;
         }
         else {
            mp[ch] = 1;
         }
       }

       for(char ch : t) {
         if(mp.find(ch)==mp.end()) {
           return false;
         }
         else {
            if(mp[ch]<=0) return false;
            else mp[ch]--;
         }
       }
      return true;

        
    }
};