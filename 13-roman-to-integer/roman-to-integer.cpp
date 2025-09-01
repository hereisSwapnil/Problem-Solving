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
        int val[256] = {};
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;

        int num = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && val[s[i]] < val[s[i + 1]]) {
                num -= val[s[i]];
            } else {
                num += val[s[i]];
            }
        }
        return num;
    }
};