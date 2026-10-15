
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int scount = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<int, int> mp;
            int dcount = 0;

            for (int j = i; j < n; j++) {
                if (mp[nums[j]] == 0) {
                    dcount++;
                }

                mp[nums[j]]++;
                scount += dcount * dcount;
            }
        }

        return scount;
    }
};
