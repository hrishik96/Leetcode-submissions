class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>nums2(2*n);
        int k=0;
        for(int i=0;i<n;i++){
            nums2[k]=nums[i];
            k+=2;
        }
        int z=1;
        for(int i=n;i<2*n;i++){
            nums2[z]=nums[i];
            z+=2;
        }
        return nums2;
    }
};