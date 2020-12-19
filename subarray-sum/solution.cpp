class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = nums[0];
        int maxEndingHere = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            maxEndingHere = maxEndingHere + nums[i];
            maxEndingHere = max(maxEndingHere, nums[i]);
            maxSoFar = max(maxSoFar, maxEndingHere);
        }
        return maxSoFar;
    }
};