class Solution {
public:
 bool isPrime(int n) {
    if (n == 1) return false;
    if(n==2) return true;
    for (int i = 2 ; i<=sqrt(n);i++) {
         if(n%i==0) {
            return false;
         }
         
    }
    return true;
 }
    int smallestValue(int n) {
        int sum = 0; 
        if(isPrime(n)) return n;
        for(int i = 1; i<sqrt(n);i++) {
            if(n%i==0 && isPrime(i)) {
                int m =n;
                while(m%i==0) {
                    sum += i;
                    m /=i;
                }
            }
        }
        for(int i = sqrt(n);i>=1;i--) {
            if(n%i==0 && isPrime(n/i)) {
                int m =n;
                while(m%(n/i)==0) {
                    sum += (n/i);
                    m = m/(n/i);
                }
            }
        }
        if(n==sum) return n;
        return smallestValue(sum);
    }
};