class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> r;
    sort(nums.begin(), nums.end());
    int size = nums.size();
    for (int i = 0; i < size - 2; i++) {
      if (nums[i] > 0) {
        break;
      }
      if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
        int l = i + 1;
        int h = size - 1;
        int sum = 0 - nums[i];
        while (l < h) {
          if (nums[l] + nums[h] == sum) {
            r.push_back({nums[l], nums[h], nums[i]});
            while (l < h && nums[l] == nums[l + 1])
              l++;
            while (l < h && nums[h] == nums[h - 1])
              h--;
            l++;
            h--;
          } else if (nums[l] + nums[h] > sum) {
            h--;
          } else {
            l++;
          }
        }
      }
    }
    return r;
  }
};