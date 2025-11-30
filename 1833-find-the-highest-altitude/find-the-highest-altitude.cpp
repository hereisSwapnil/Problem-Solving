class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m = 0;
        int s = 0;
        for(int i: gain){
            s+=i;
            if(s>m){
                m = s;
            }
        }
        return m;
    }
};