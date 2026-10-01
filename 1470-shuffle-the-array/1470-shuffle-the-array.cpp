class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>nums2(2*n);
        int k=0;
        for(int i=0;i<n;i++){
            nums2[k]=nums[i];
            nums2[k+1]=nums[n+i];
            k+=2;
        }
        return nums2;
    }
};