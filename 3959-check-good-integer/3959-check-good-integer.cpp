class Solution {
public:
    bool checkGoodInteger(int n) {
     int num = n;
     int sum = 0;
     int sum_sq = 0;
        while (num!=0) {
            int rem = num%10;
            sum += rem;
            sum_sq += (rem*rem);
            num = num/10;
        }
        int k = sum_sq - sum;
        if(k>=50) return true;
        else  return false;
    }
};