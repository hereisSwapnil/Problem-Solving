class Solution {
public:
    // simple approach
    // bool isPowerOfTwo(int n) {
    //     while(n%2 == 0 || n == 1){
    //         if(n == 1 || n == 2){
    //             return true;
    //         }
    //         n /= 2;
    //     }
    //     return false;
    // }
    
    // using bit manupulation
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};