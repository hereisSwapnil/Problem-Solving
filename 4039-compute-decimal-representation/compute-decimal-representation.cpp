class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int i = 0;
        while(n>0){
            int ls = n%10;
            int data = pow(10, i) * ls;
            if(data != 0){
                ans.push_back(data);
            }
            n = n/10;
            i++;
        }
        sort(ans.begin(), ans.end(), [](int a, int b){
            return a>b;
        });
        return ans;
    }
};