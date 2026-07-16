class Solution {
public:
bool isPrime(int n) {
    if(n==1) return false;
    if(n==2) return true;
    for (int i = 2 ; i<=sqrt(n);i++) {
        if(n%i ==0) {
            return false;
        }
    }
    return true;
}

int highestfactor(int n) {
    for(int i = n/2 ; i>=1;i--) {
            if(n%i==0) {
                return i;
            }
                
        }
        return 1;
}
    int minSteps(int n) {
        if(n==1) return 0;
        if(isPrime(n)) return n;
        int maxo = INT_MIN;
        int count = 0;
     
       while (n>1) {
        if(isPrime(n)) {
          count += n;
          break;  
        } 
         maxo = highestfactor(n);
        count += n/maxo;
        n = maxo; 
       }      
      
     return count;
        
        
    }
};