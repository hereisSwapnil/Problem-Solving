class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        if (n <= 2) return 0;
        vector<bool> sieve(n, true);
        for(int i = 2; i*i<n; i++){
            if(sieve[i] == true){
                for(int j = i*i; j<n; j=j+i){
                    sieve[j] = false;
                }
            }
        }
        for(int i = 2; i<n; i++){
            if(sieve[i] == true) {
                count++;
            }
        }
        return count;
    }
};