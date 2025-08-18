class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // Bruteforce Approach
        // int n = piles.size();
        // bool isDone = false;
        // int rate = 1;
        // while(!isDone){
        //     long long hours = 0;
        //     for(int i = 0; i<n; i++){
        //         hours += ceil((double)piles[i] / rate);
        //     }
        //     if (hours <= h){
        //         isDone = true;
        //         break;
        //     }
        //     rate++;
        // }
        // return rate;

        // Optimized approach
        int n = piles.size();
        int i = 1;
        int j = *max_element(piles.begin(), piles.end());;
        int rate = 1;
        int ans = 1;
        while(i<=j){
            rate = i + (j-i)/2;
            long long hours = 0;
            for(int i = 0; i<n; i++){
                hours += (piles[i] + rate - 1) / rate;
            }
            if (hours <= h) {
                ans = rate;
                j = rate - 1;
            } else {
                i = rate + 1;
            }
        }
        return ans;
    }
};