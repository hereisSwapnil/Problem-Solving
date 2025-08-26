class Solution {
public:
    bool isValid(string s) {
       unordered_map<char, char> mp;
       mp['}'] = '{';
       mp[']'] = '[';
       mp[')'] = '(';
       stack<char> st;
       for (char i: s){
        if(!st.empty() && st.top() == mp[i]){
            st.pop();
        }else{
            st.push(i);
        }
       }
       return st.empty();
    }
};