class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }int i=0;
       for(i=0;mp[nums[i]]!=1;i++){

       } 
       return nums[i];
    }
};