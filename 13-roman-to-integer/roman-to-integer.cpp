class Solution {
public:
    // Solution 1
    // int romanToInt(string s) {
    //     unordered_map<char, int> mp = {
    //         {'I', 1},
    //         {'V', 5},
    //         {'X', 10},
    //         {'L', 50},
    //         {'C', 100},
    //         {'D', 500},
    //         {'M', 1000}
    //     };
    //     int num = 0;
    //     int i = 0;
    //     while(i<s.length()){
    //         if(s[i] == 'I' && s[i+1] == 'V'){
    //             num += 4;
    //             i+=2;
    //         }else if(s[i] == 'I' && s[i+1] == 'X'){
    //             num += 9;
    //             i+=2;
    //         }else if(s[i] == 'X' && s[i+1] == 'L'){
    //             num += 40;
    //             i+=2;
    //         }else if(s[i] == 'X' && s[i+1] == 'C'){
    //             num += 90;
    //             i+=2;
    //         }else if(s[i] == 'C' && s[i+1] == 'D'){
    //             num += 400;
    //             i+=2;
    //         }else if(s[i] == 'C' && s[i+1] == 'M'){
    //             num += 900;
    //             i+=2;
    //         }else{
    //             num += mp[s[i]];
    //             i++;
    //         }
    //     }
    //     return num;
    // }

    // Solution 2
    int romanToInt(string s) {
        auto value = [](char c) {
            switch (c) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
                default: return 0;
            }
        };

        int num = 0;
        int prev = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int curr = value(s[i]);
            if (curr < prev) num -= curr;
            else num += curr;
            prev = curr;
        }

        return num;
    }
};