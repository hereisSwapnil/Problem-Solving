class Solution {
public:
    // time complexity optimisation algo
    // int maxDepth(string s) {
    //     stack<char> st;
    //     int maxC = 0;
    //     for(char i: s){
    //         if(i == '(') st.push('(');
    //         else if(i == ')') st.pop();

    //         maxC = max(maxC, (int)st.size());
    //     }
    //     return maxC;
    // }

    // memory efficient algo
    int maxDepth(string s) {
        int c = 0;
        int maxC = 0;
        for(char i: s){
            if(i == '(') {
                c++;
                maxC = max(maxC, c);
            }
            else if(i == ')') c--;

            
        }
        return maxC;
    }
};