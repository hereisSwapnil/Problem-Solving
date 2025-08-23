class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res(m+n);
        int i = 0;
        int a = 0;
        int b = 0;
        while(a<m && b<n){
            if(nums1[a]<nums2[b]){
                res[i] = nums1[a];
                a++;
            }else{
                res[i] = nums2[b];
                b++;
            }
            i++;
        }
        while(a<m){
            res[i] = nums1[a];
            i++;
            a++;
        }
        while(b<n){
            res[i] = nums2[b];
            i++;
            b++;
        }

        for(int i = 0; i<m+n; i++){
            nums1[i] = res[i];
        }
    }
};