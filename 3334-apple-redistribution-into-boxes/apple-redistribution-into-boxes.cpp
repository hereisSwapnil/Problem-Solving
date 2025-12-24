class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());
        int sum = 0;
        for(int i: apple){
            sum+=i;
        }
        int ans = 0;
        int i = 0;
        while(sum>0){
            sum-=capacity[i];
            i++;
            ans++;
        }
        return ans;
    }
};