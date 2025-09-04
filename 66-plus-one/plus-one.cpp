class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        int carry = 1;

        for(int i = n; i>=0; i--){
            int sum = carry+digits[i];
            carry = sum/10;
            digits[i] = sum%10;
            // 10 (sum)
            // 10 / 10 = 1 (carry)
            // 10 % 10 = 0 (value)
        }
        if(carry){
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};