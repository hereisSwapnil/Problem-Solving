class Solution {
public:
    int calPoints(vector<string>& operations) {
        // Solution 1
        // vector<int> ans;
        // int sum = 0;
        // for(string i: operations){
        //     if(i == "+"){
        //         int n = ans.size();
        //         sum += ans[n-1]+ans[n-2];
        //         ans.push_back(ans[n-1]+ans[n-2]);
        //     }
        //     else if(i == "D"){
        //         int n = ans.size();
        //         sum += ans[n-1]*2;
        //         ans.push_back(ans[n-1]*2);
        //     }
        //     else if(i == "C"){
        //         int n = ans.size();
        //         sum -= ans[n-1];
        //         ans.pop_back(); 
        //     }
        //     else{
        //         sum += stoi(i);
        //         ans.push_back(stoi(i));
        //     }
        // }
        // return sum;

        deque<int> dq;
        for(int i=0;i<operations.size();i++) {
            if(operations[i] == "+") {
                int a = dq.back();
                dq.pop_back();
                int b = dq.back();
                int sum = a + b;
                dq.push_back(a);
                dq.push_back(sum);
            }
            else if(operations[i] == "D") {
                dq.push_back(dq.back() * 2);
            }
            else if(operations[i] == "C") {
                dq.pop_back();
            }
            else {
                dq.push_back(stoi(operations[i]));
            }
        }
        return accumulate(dq.begin(),dq.end(),0);
    }
};