class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int sum = 0;
        for(string i: operations){
            if(i == "+"){
                int n = ans.size();
                sum += ans[n-1]+ans[n-2];
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else if(i == "D"){
                int n = ans.size();
                sum += ans[n-1]*2;
                ans.push_back(ans[n-1]*2);
            }
            else if(i == "C"){
                int n = ans.size();
                sum -= ans[n-1];
                ans.pop_back(); 
            }
            else{
                sum += stoi(i);
                ans.push_back(stoi(i));
            }
        }
        return sum;
    }
};