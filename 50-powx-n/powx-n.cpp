class Solution {
public:
    double power(double x, long long n){
       if(n == 0) return 1;
       if(n<0) return 1/power(x, -n);
       if(n%2 == 0) return power(x*x, n/2);
       return x * power(x*x, n/2);
    }
    double myPow(double x, int n) {
        return power(x, n);
    }
};