class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int index = 0;
        vector<int> result;
        for (int& n: nums) {
          if (m.count(target - n)) {
            result.push_back(m[target-n]);
            result.push_back(index);
            break;
          } else {
            m[n] = index;
          }
          index++;
        }
      return result;
    }
};
